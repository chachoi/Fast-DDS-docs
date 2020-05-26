# -*- coding: utf-8 -*-
#
# sphynx-demo documentation build configuration file, created by
# sphinx-quickstart on Tue Aug  2 16:48:54 2016.
#
# This file is execfile()d with the current directory set to its
# containing dir.
#
# Note that not all possible configuration values are present in this
# autogenerated file.
#
# All configuration values have a default; values that are commented out
# serve to show the default.

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
# import sys
# sys.path.insert(0, os.path.abspath('.'))
import os
import pathlib
import shutil
import subprocess

import git


def get_git_branch():
    """Get the git branch this repository is currently on."""
    path_to_here = os.path.abspath(os.path.dirname(__file__))

    # Invoke git to get the current branch which we use to get the theme
    try:
        p = subprocess.Popen(
            ['git', 'rev-parse', '--abbrev-ref', 'HEAD'],
            stdout=subprocess.PIPE,
            cwd=path_to_here
        )

        return p.communicate()[0].decode().rstrip()

    except Exception:
        print('Could not get the branch')

    # Couldn't figure out the branch probably due to an error
    return None


def configure_doxyfile(
    doxyfile_in,
    doxyfile_out,
    input_dir,
    output_dir,
    project_binary_dir,
    project_source_dir
):
    """
    Configure Doxyfile in the CMake style.

    :param doxyfile_in: Path to input Doxygen configuration file
    :param doxyfile_out: Path to output Doxygen configuration file
    :param input_dir: CMakeLists.txt value of DOXYGEN_INPUT_DIR
    :param output_dir: CMakeLists.txt value of DOXYGEN_OUTPUT_DIR
    :param project_binary_dir: CMakeLists.txt value of PROJECT_BINARY_DIR
    :param project_source_dir: CMakeLists.txt value of PROJECT_SOURCE_DIR
    """
    print('Configuring Doxyfile')
    with open(doxyfile_in, 'r') as file:
        filedata = file.read()

    filedata = filedata.replace('@DOXYGEN_INPUT_DIR@', input_dir)
    filedata = filedata.replace('@DOXYGEN_OUTPUT_DIR@', output_dir)
    filedata = filedata.replace('@PROJECT_BINARY_DIR@', project_binary_dir)
    filedata = filedata.replace('@PROJECT_SOURCE_DIR@', project_source_dir)

    os.makedirs(os.path.dirname(doxyfile_out), exist_ok=True)
    with open(doxyfile_out, 'w') as file:
        file.write(filedata)


script_path = os.path.abspath(pathlib.Path(__file__).parent.absolute())
# Project directories
project_source_dir = os.path.abspath('{}/../code'.format(script_path))
project_binary_dir = os.path.abspath('{}/../build/code'.format(script_path))
output_dir = os.path.abspath('{}/doxygen'.format(project_binary_dir))
doxygen_html = os.path.abspath('{}/html/doxygen'.format(project_binary_dir))
os.makedirs(os.path.dirname(output_dir), exist_ok=True)
os.makedirs(os.path.dirname(doxygen_html), exist_ok=True)

# Doxyfile
doxyfile_in = os.path.abspath(
    '{}/doxygen-config.in'.format(project_source_dir)
)
doxyfile_out = os.path.abspath('{}/doxygen-config'.format(project_binary_dir))

# Header files
input_dir = os.path.abspath(
    '{}/external/eprosima/src/fastrtps/include/fastdds'.format(
        project_binary_dir
    )
)

# Check if we're running on Read the Docs' servers
read_the_docs_build = os.environ.get('READTHEDOCS', None) == 'True'
if read_the_docs_build:
    print('Read the Docs environment detected!')

    fastdds_repo_name = os.path.abspath(
        '{}/external/eprosima/src/fastrtps'.format(
            project_binary_dir
        )
    )

    # Remove repository if exists
    if os.path.isdir(fastdds_repo_name):
        print('Removing existing repository in {}'.format(fastdds_repo_name))
        shutil.rmtree(fastdds_repo_name)

    # Create necessary directory path
    os.makedirs(os.path.dirname(fastdds_repo_name), exist_ok=True)

    # Clone repository
    print('Cloning Fast DDS')
    fastdds = git.Repo.clone_from(
        'https://github.com/eProsima/Fast-RTPS.git',
        fastdds_repo_name,
    )

    # Documentation repository branch
    docs_branch = get_git_branch()
    print('Current documentation branch is "{}"'.format(docs_branch))

    # User specified Fast DDS branch
    fastdds_branch = os.environ.get('FASTRTPS_BRANCH', None)

    # First try to checkout to ${FASTRTPS_BRANCH}
    # Else try with current documentation branch
    # Else checkout to master
    if (fastdds_branch and
            fastdds.refs.__contains__('origin/{}'.format(fastdds_branch))):
        fastdds_branch = 'origin/{}'.format(fastdds_branch)
    elif (docs_branch and
            fastdds.refs.__contains__('origin/{}'.format(docs_branch))):
        fastdds_branch = 'origin/{}'.format(docs_branch)
    else:
        print(
            'Fast DDS does not have either "{}" or "{}" branches'.format(
                fastdds_branch,
                docs_branch
            )
        )
        fastdds_branch = 'origin/master'

    # Actual checkout
    print('Checking out Fast DDS branch "{}"'.format(fastdds_branch))
    fastdds.refs[fastdds_branch].checkout()

    # Configure Doxyfile
    configure_doxyfile(
        doxyfile_in,
        doxyfile_out,
        input_dir,
        output_dir,
        project_binary_dir,
        project_source_dir
    )
    # Generate doxygen documentation
    subprocess.call('doxygen {}'.format(doxyfile_out), shell=True)

breathe_projects = {
    'FastDDS': os.path.abspath('{}/xml'.format(output_dir))
}
breathe_default_project = 'FastDDS'

# -- General configuration ------------------------------------------------

# If your documentation needs a minimal Sphinx version, state it here.
#
# needs_sphinx = '1.0'

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'breathe',
]
try:
    import sphinxcontrib.spelling  # noqa: F401
    extensions.append('sphinxcontrib.spelling')

    # spelling_word_list_filename = 'spelling_wordlist.txt'
    spelling_word_list_filename = [
        'spelling_wordlist.txt',
        'fastdds/api_reference/spelling_wordlist.txt'
    ]

    from sphinxcontrib.spelling.filters import ContractionFilter
    spelling_filters = [ContractionFilter]
except ImportError:
    pass


# Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']

# The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
#
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'

# The encoding of source files.
#
# source_encoding = 'utf-8-sig'

# The master toctree document.
master_doc = 'index'

# General information about the project.
project = u'Fast DDS'
copyright = u'2019, eProsima'
author = u'eProsima'

# The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = u'2.0.0'
# The full version, including alpha/beta/rc tags.
release = u'2.0.0'

# The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set "language" from the command line for these cases.
language = None

# There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#
# today = ''
#
# Else, today_fmt is used as the format for a strftime call.
#
# today_fmt = '%B %d, %Y'

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This patterns also effect to html_static_path and html_extra_path
exclude_patterns = [
    '*/includes/*.rst',
    '*/*/includes/*.rst',
    '*/*/*/includes/*.rst'
]

# The reST default role (used for this markup: `text`) to use for all
# documents.
#
# default_role = None

# If true, '()' will be appended to :func: etc. cross-reference text.
#
# add_function_parentheses = True

# If true, the current module name will be prepended to all description
# unit titles (such as .. function::).
#
# add_module_names = True

# If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#
# show_authors = False

# The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'

# A list of ignored prefixes for module index sorting.
# modindex_common_prefix = []

# If true, keep warnings as "system message" paragraphs in the built documents.
# keep_warnings = False

# If true, `todo` and `todoList` produce output, else they produce nothing.
todo_include_todos = False


# -- Options for HTML output ----------------------------------------------

# The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
html_theme = 'sphinx_rtd_theme'

# Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#
# html_theme_options = {}

# Add any paths that contain custom themes here, relative to this directory.
# html_theme_path = []

# The name for this set of Sphinx documents.
# "<project> v<release> documentation" by default.
#
# html_title = u'sphynx-demo v0.0.1'

# A shorter title for the navigation bar.  Default is the same as html_title.
#
# html_short_title = None

# The name of an image file (relative to this directory) to place at the top
# of the sidebar.
#
# html_logo = None

# The name of an image file (relative to this directory) to use as a favicon of
# the docs. This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#
# html_favicon = None

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = ['_static']

html_context = {
        'css_files': [
            '_static/css/fiware_readthedocs.css',  # logo
            ],
        }


# Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#
# html_extra_path = []

# If not None, a 'Last updated on:' timestamp is inserted at every page
# bottom, using the given strftime format.
# The empty string is equivalent to '%b %d, %Y'.
#
# html_last_updated_fmt = None

# If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#
# html_use_smartypants = True

# Custom sidebar templates, maps document names to template names.
#
# html_sidebars = {}

# Additional templates that should be rendered to pages, maps page names to
# template names.
#
# html_additional_pages = {}

# If false, no module index is generated.
#
# html_domain_indices = True

# If false, no index is generated.
#
# html_use_index = True

# If true, the index is split into individual pages for each letter.
#
# html_split_index = False

# If true, links to the reST sources are added to the pages.
#
# html_show_sourcelink = True

# If true, "Created using Sphinx" is shown in the HTML footer. Default is True.
#
# html_show_sphinx = True

# If true, "(C) Copyright ..." is shown in the HTML footer. Default is True.
#
# html_show_copyright = True

# If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#
# html_use_opensearch = ''

# This is the file name suffix for HTML files (e.g. ".xhtml").
# html_file_suffix = None

# Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr', 'zh'
#
# html_search_language = 'en'

# A dictionary with options for the search language support, empty by default.
# 'ja' uses this config value.
# 'zh' user can custom change `jieba` dictionary path.
#
# html_search_options = {'type': 'default'}

# The name of a javascript file (relative to the configuration directory) that
# implements a search results scorer. If empty, the default will be used.
#
# html_search_scorer = 'scorer.js'

# Output file base name for HTML help builder.
htmlhelp_basename = 'FastRTPSManual'

# -- Options for LaTeX output ---------------------------------------------

latex_elements = {
     # The paper size ('letterpaper' or 'a4paper').
     #
     # 'papersize': 'letterpaper',

     # The font size ('10pt', '11pt' or '12pt').
     #
     # 'pointsize': '10pt',

     # Additional stuff for the LaTeX preamble.
     #
     # 'preamble': '',

     # Latex figure (float) alignment
     #
     # 'figure_align': 'htbp',
}

# Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'FastRTPS.tex', u'FastRTPS Documentation',
     u'eProsima', 'manual'),
]

# The name of an image file (relative to this directory) to place at the top of
# the title page.
#
# latex_logo = 01-figures/logo.png

# For "manual" documents, if this is true, then toplevel headings are parts,
# not chapters.
#
# latex_use_parts = False

# If true, show page references after internal links.
#
# latex_show_pagerefs = False

# If true, show URL addresses after external links.
#
# latex_show_urls = False

# Documents to append as an appendix to all manuals.
#
# latex_appendices = []

# It false, will not define \strong, \code, 	itleref, \crossref ... but only
# \sphinxstrong, ..., \sphinxtitleref, ... To help avoid clash with user added
# packages.
#
# latex_keep_old_macro_names = True

# If false, no module index is generated.
#
# latex_domain_indices = True


# -- Options for manual page output ---------------------------------------

# One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'FastRTPS', u'FastRTPS Documentation',
     [author], 1)
]

# If true, show URL addresses after external links.
#
# man_show_urls = False


# -- Options for Texinfo output -------------------------------------------

# Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'FastRTPS', u'FastRTPS Documentation',
     author, 'FastRTPS', 'Documentation of eProsima FastRTPS',
     'Miscellaneous'),
]

# Documents to append as an appendix to all manuals.
#
# texinfo_appendices = []

# If false, no module index is generated.
#
# texinfo_domain_indices = True

# How to display URL addresses: 'footnote', 'no', or 'inline'.
#
# texinfo_show_urls = 'footnote'

# If true, do not generate a @detailmenu in the "Top" node's menu.
#
# texinfo_no_detailmenu = False
