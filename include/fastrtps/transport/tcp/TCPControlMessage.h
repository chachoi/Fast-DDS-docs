// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file tcp_idl.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _tcp_idl_H_
#define _tcp_idl_H_

// TODO Poner en el contexto.

#include <fastrtps/rtps/common/Locator.h>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(tcp_idl_SOURCE)
#define tcp_idl_DllAPI __declspec( dllexport )
#else
#define tcp_idl_DllAPI __declspec( dllimport )
#endif // tcp_idl_SOURCE
#else
#define tcp_idl_DllAPI
#endif
#else
#define tcp_idl_DllAPI
#endif // _WIN32

namespace eprosima{
namespace fastrtps{
namespace rtps{

/*!
 * @brief This class represents the enumeration TCPCommonKind defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
enum TCPCommonKind : uint32_t
{
    BIND_CONNECTION,
    OPEN_LOGICAL_PORT,
    CHECK_LOGICAL_PORT,
    KEEP_ALIVE,
    UNBIND_CONNECTION,
    LOGICAL_PORT_IS_CLOSED
};
/*!
 * @brief This class represents the structure ConnectionRequest_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class ConnectionRequest_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ConnectionRequest_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ConnectionRequest_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ConnectionRequest_t that will be copied.
     */
    eProsima_user_DllExport ConnectionRequest_t(const ConnectionRequest_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object ConnectionRequest_t that will be copied.
     */
    eProsima_user_DllExport ConnectionRequest_t(ConnectionRequest_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ConnectionRequest_t that will be copied.
     */
    eProsima_user_DllExport ConnectionRequest_t& operator=(const ConnectionRequest_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object ConnectionRequest_t that will be copied.
     */
    eProsima_user_DllExport ConnectionRequest_t& operator=(ConnectionRequest_t &&x);
    
    /*!
     * @brief This function sets a value in member protocolVersion
     * @param _protocolVersion New value for member protocolVersion
     */
    inline eProsima_user_DllExport void protocolVersion(const ProtocolVersion_t& _protocolVersion)
    {
        m_protocolVersion = _protocolVersion;
    }

    /*!
     * @brief This function returns the value of member protocolVersion
     * @return Value of member protocolVersion
     */
    inline eProsima_user_DllExport ProtocolVersion_t protocolVersion() const
    {
        return m_protocolVersion;
    }

    /*!
     * @brief This function returns a reference to member protocolVersion
     * @return Reference to member protocolVersion
     */
    inline eProsima_user_DllExport ProtocolVersion_t& protocolVersion()
    {
        return m_protocolVersion;
    }

    /*!
     * @brief This function returns a reference to member vendorId
     * @return Reference to member vendorId
     */
    inline eProsima_user_DllExport VendorId_t& vendorId()
    {
        return m_vendorId;
    }
    /*!
     * @brief This function sets a value in member transportLocator
     * @param _transportLocator New value for member transportLocator
     */
    inline eProsima_user_DllExport void transportLocator(const Locator_t& _transportLocator)
    {
        m_transportLocator = _transportLocator;
    }

    /*!
     * @brief This function returns the value of member transportLocator
     * @return Value of member transportLocator
     */
    inline eProsima_user_DllExport Locator_t transportLocator() const
    {
        return m_transportLocator;
    }

    /*!
     * @brief This function returns a reference to member transportLocator
     * @return Reference to member transportLocator
     */
    inline eProsima_user_DllExport Locator_t& transportLocator()
    {
        return m_transportLocator;
    }
    
private:
    ProtocolVersion_t m_protocolVersion;
    VendorId_t m_vendorId;
    Locator_t m_transportLocator;
};
/*!
 * @brief This class represents the structure OpenLogicalPortRequest_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class OpenLogicalPortRequest_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~OpenLogicalPortRequest_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object OpenLogicalPortRequest_t that will be copied.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t(const OpenLogicalPortRequest_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object OpenLogicalPortRequest_t that will be copied.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t(OpenLogicalPortRequest_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object OpenLogicalPortRequest_t that will be copied.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t& operator=(const OpenLogicalPortRequest_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object OpenLogicalPortRequest_t that will be copied.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t& operator=(OpenLogicalPortRequest_t &&x);
    
    /*!
     * @brief This function sets a value in member logicalPort
     * @param _logicalPort New value for member logicalPort
     */
    inline eProsima_user_DllExport void logicalPort(uint16_t _logicalPort)
    {
        m_logicalPort = _logicalPort;
    }

    /*!
     * @brief This function returns the value of member logicalPort
     * @return Value of member logicalPort
     */
    inline eProsima_user_DllExport uint16_t logicalPort() const
    {
        return m_logicalPort;
    }

    /*!
     * @brief This function returns a reference to member logicalPort
     * @return Reference to member logicalPort
     */
    inline eProsima_user_DllExport uint16_t& logicalPort()
    {
        return m_logicalPort;
    }
    
private:
    uint16_t m_logicalPort;
};
/*!
 * @brief This class represents the structure CheckLogicalPortsRequest_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class CheckLogicalPortsRequest_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CheckLogicalPortsRequest_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CheckLogicalPortsRequest_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t(const CheckLogicalPortsRequest_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object CheckLogicalPortsRequest_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t(CheckLogicalPortsRequest_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CheckLogicalPortsRequest_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t& operator=(const CheckLogicalPortsRequest_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object CheckLogicalPortsRequest_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t& operator=(CheckLogicalPortsRequest_t &&x);
    
    /*!
     * @brief This function copies the value in member logicalPortsRange
     * @param _logicalPortsRange New value to be copied in member logicalPortsRange
     */
    inline eProsima_user_DllExport void logicalPortsRange(const std::vector<uint16_t> &_logicalPortsRange)
    {
        m_logicalPortsRange = _logicalPortsRange;
    }

    /*!
     * @brief This function moves the value in member logicalPortsRange
     * @param _logicalPortsRange New value to be moved in member logicalPortsRange
     */
    inline eProsima_user_DllExport void logicalPortsRange(std::vector<uint16_t> &&_logicalPortsRange)
    {
        m_logicalPortsRange = std::move(_logicalPortsRange);
    }

    /*!
     * @brief This function returns a constant reference to member logicalPortsRange
     * @return Constant reference to member logicalPortsRange
     */
    inline eProsima_user_DllExport const std::vector<uint16_t>& logicalPortsRange() const
    {
        return m_logicalPortsRange;
    }

    /*!
     * @brief This function returns a reference to member logicalPortsRange
     * @return Reference to member logicalPortsRange
     */
    inline eProsima_user_DllExport std::vector<uint16_t>& logicalPortsRange()
    {
        return m_logicalPortsRange;
    }
    
private:
    std::vector<uint16_t> m_logicalPortsRange;
};
/*!
 * @brief This class represents the structure KeepAliveRequest_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class KeepAliveRequest_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport KeepAliveRequest_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~KeepAliveRequest_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object KeepAliveRequest_t that will be copied.
     */
    eProsima_user_DllExport KeepAliveRequest_t(const KeepAliveRequest_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object KeepAliveRequest_t that will be copied.
     */
    eProsima_user_DllExport KeepAliveRequest_t(KeepAliveRequest_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object KeepAliveRequest_t that will be copied.
     */
    eProsima_user_DllExport KeepAliveRequest_t& operator=(const KeepAliveRequest_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object KeepAliveRequest_t that will be copied.
     */
    eProsima_user_DllExport KeepAliveRequest_t& operator=(KeepAliveRequest_t &&x);
    
    /*!
     * @brief This function sets a value in member locator
     * @param _locator New value for member locator
     */
    inline eProsima_user_DllExport void locator(const Locator_t& _locator)
    {
        m_locator = _locator;
    }

    /*!
     * @brief This function returns the value of member locator
     * @return Value of member locator
     */
    inline eProsima_user_DllExport Locator_t locator() const
    {
        return m_locator;
    }

    /*!
     * @brief This function returns a reference to member locator
     * @return Reference to member locator
     */
    inline eProsima_user_DllExport Locator_t& locator()
    {
        return m_locator;
    }
    
private:
    Locator_t m_locator;
};
/*!
 * @brief This class represents the structure LogicalPortIsClosedRequest_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class LogicalPortIsClosedRequest_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LogicalPortIsClosedRequest_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LogicalPortIsClosedRequest_t that will be copied.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t(const LogicalPortIsClosedRequest_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object LogicalPortIsClosedRequest_t that will be copied.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t(LogicalPortIsClosedRequest_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LogicalPortIsClosedRequest_t that will be copied.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t& operator=(const LogicalPortIsClosedRequest_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object LogicalPortIsClosedRequest_t that will be copied.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t& operator=(LogicalPortIsClosedRequest_t &&x);
    
    /*!
     * @brief This function sets a value in member logicalPort
     * @param _logicalPort New value for member logicalPort
     */
    inline eProsima_user_DllExport void logicalPort(uint16_t _logicalPort)
    {
        m_logicalPort = _logicalPort;
    }

    /*!
     * @brief This function returns the value of member logicalPort
     * @return Value of member logicalPort
     */
    inline eProsima_user_DllExport uint16_t logicalPort() const
    {
        return m_logicalPort;
    }

    /*!
     * @brief This function returns a reference to member logicalPort
     * @return Reference to member logicalPort
     */
    inline eProsima_user_DllExport uint16_t& logicalPort()
    {
        return m_logicalPort;
    }
    
private:
    uint16_t m_logicalPort;
};
/*!
 * @brief This class represents the union RequestData defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class RequestData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport RequestData();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~RequestData();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object RequestData that will be copied.
     */
    eProsima_user_DllExport RequestData(const RequestData &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object RequestData that will be copied.
     */
    eProsima_user_DllExport RequestData(RequestData &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object RequestData that will be copied.
     */
    eProsima_user_DllExport RequestData& operator=(const RequestData &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object RequestData that will be copied.
     */
    eProsima_user_DllExport RequestData& operator=(RequestData &&x);
    
    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(TCPCommonKind __d);
    
    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport TCPCommonKind _d() const;
    
    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport TCPCommonKind& _d();
    
    /*!
     * @brief This function copies the value in member connectionRequest
     * @param _connectionRequest New value to be copied in member connectionRequest
     */
    eProsima_user_DllExport void connectionRequest(const ConnectionRequest_t &_connectionRequest);

    /*!
     * @brief This function moves the value in member connectionRequest
     * @param _connectionRequest New value to be moved in member connectionRequest
     */
    eProsima_user_DllExport void connectionRequest(ConnectionRequest_t &&_connectionRequest);

    /*!
     * @brief This function returns a constant reference to member connectionRequest
     * @return Constant reference to member connectionRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const ConnectionRequest_t& connectionRequest() const;

    /*!
     * @brief This function returns a reference to member connectionRequest
     * @return Reference to member connectionRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport ConnectionRequest_t& connectionRequest();
    /*!
     * @brief This function copies the value in member openLogicalPortRequest
     * @param _openLogicalPortRequest New value to be copied in member openLogicalPortRequest
     */
    eProsima_user_DllExport void openLogicalPortRequest(const OpenLogicalPortRequest_t &_openLogicalPortRequest);

    /*!
     * @brief This function moves the value in member openLogicalPortRequest
     * @param _openLogicalPortRequest New value to be moved in member openLogicalPortRequest
     */
    eProsima_user_DllExport void openLogicalPortRequest(OpenLogicalPortRequest_t &&_openLogicalPortRequest);

    /*!
     * @brief This function returns a constant reference to member openLogicalPortRequest
     * @return Constant reference to member openLogicalPortRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const OpenLogicalPortRequest_t& openLogicalPortRequest() const;

    /*!
     * @brief This function returns a reference to member openLogicalPortRequest
     * @return Reference to member openLogicalPortRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport OpenLogicalPortRequest_t& openLogicalPortRequest();
    /*!
     * @brief This function copies the value in member checkLogicalPortsRequest
     * @param _checkLogicalPortsRequest New value to be copied in member checkLogicalPortsRequest
     */
    eProsima_user_DllExport void checkLogicalPortsRequest(const CheckLogicalPortsRequest_t &_checkLogicalPortsRequest);

    /*!
     * @brief This function moves the value in member checkLogicalPortsRequest
     * @param _checkLogicalPortsRequest New value to be moved in member checkLogicalPortsRequest
     */
    eProsima_user_DllExport void checkLogicalPortsRequest(CheckLogicalPortsRequest_t &&_checkLogicalPortsRequest);

    /*!
     * @brief This function returns a constant reference to member checkLogicalPortsRequest
     * @return Constant reference to member checkLogicalPortsRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const CheckLogicalPortsRequest_t& checkLogicalPortsRequest() const;

    /*!
     * @brief This function returns a reference to member checkLogicalPortsRequest
     * @return Reference to member checkLogicalPortsRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport CheckLogicalPortsRequest_t& checkLogicalPortsRequest();
    /*!
     * @brief This function copies the value in member keepAliveRequest
     * @param _keepAliveRequest New value to be copied in member keepAliveRequest
     */
    eProsima_user_DllExport void keepAliveRequest(const KeepAliveRequest_t &_keepAliveRequest);

    /*!
     * @brief This function moves the value in member keepAliveRequest
     * @param _keepAliveRequest New value to be moved in member keepAliveRequest
     */
    eProsima_user_DllExport void keepAliveRequest(KeepAliveRequest_t &&_keepAliveRequest);

    /*!
     * @brief This function returns a constant reference to member keepAliveRequest
     * @return Constant reference to member keepAliveRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const KeepAliveRequest_t& keepAliveRequest() const;

    /*!
     * @brief This function returns a reference to member keepAliveRequest
     * @return Reference to member keepAliveRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport KeepAliveRequest_t& keepAliveRequest();
    /*!
     * @brief This function copies the value in member logicalPortIsClosedRequest
     * @param _logicalPortIsClosedRequest New value to be copied in member logicalPortIsClosedRequest
     */
    eProsima_user_DllExport void logicalPortIsClosedRequest(const LogicalPortIsClosedRequest_t &_logicalPortIsClosedRequest);

    /*!
     * @brief This function moves the value in member logicalPortIsClosedRequest
     * @param _logicalPortIsClosedRequest New value to be moved in member logicalPortIsClosedRequest
     */
    eProsima_user_DllExport void logicalPortIsClosedRequest(LogicalPortIsClosedRequest_t &&_logicalPortIsClosedRequest);

    /*!
     * @brief This function returns a constant reference to member logicalPortIsClosedRequest
     * @return Constant reference to member logicalPortIsClosedRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const LogicalPortIsClosedRequest_t& logicalPortIsClosedRequest() const;

    /*!
     * @brief This function returns a reference to member logicalPortIsClosedRequest
     * @return Reference to member logicalPortIsClosedRequest
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport LogicalPortIsClosedRequest_t& logicalPortIsClosedRequest();
    
private:
    TCPCommonKind m__d;
    
    ConnectionRequest_t m_connectionRequest;
    OpenLogicalPortRequest_t m_openLogicalPortRequest;
    CheckLogicalPortsRequest_t m_checkLogicalPortsRequest;
    KeepAliveRequest_t m_keepAliveRequest;
    LogicalPortIsClosedRequest_t m_logicalPortIsClosedRequest;
};
/*!
 * @brief This class represents the structure ControlProtocolRequestData defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class ControlProtocolRequestData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ControlProtocolRequestData();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ControlProtocolRequestData();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ControlProtocolRequestData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolRequestData(const ControlProtocolRequestData &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object ControlProtocolRequestData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolRequestData(ControlProtocolRequestData &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ControlProtocolRequestData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolRequestData& operator=(const ControlProtocolRequestData &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object ControlProtocolRequestData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolRequestData& operator=(ControlProtocolRequestData &&x);
    
    /*!
     * @brief This function copies the value in member requestData
     * @param _requestData New value to be copied in member requestData
     */
    inline eProsima_user_DllExport void requestData(const RequestData &_requestData)
    {
        m_requestData = _requestData;
    }

    /*!
     * @brief This function moves the value in member requestData
     * @param _requestData New value to be moved in member requestData
     */
    inline eProsima_user_DllExport void requestData(RequestData &&_requestData)
    {
        m_requestData = std::move(_requestData);
    }

    /*!
     * @brief This function returns a constant reference to member requestData
     * @return Constant reference to member requestData
     */
    inline eProsima_user_DllExport const RequestData& requestData() const
    {
        return m_requestData;
    }

    /*!
     * @brief This function returns a reference to member requestData
     * @return Reference to member requestData
     */
    inline eProsima_user_DllExport RequestData& requestData()
    {
        return m_requestData;
    }
    
private:
    RequestData m_requestData;
};
/*!
 * @brief This class represents the enumeration ResponseCode defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
enum ResponseCode : uint32_t
{
    RETCODE_OK,
    RETCODE_BAD_REQUEST,
    RETCODE_EXISTING_CONNECTION,
    RETCODE_INVALID_PORT,
    RETCODE_UNKNOWN_LOCATOR,
    RETCODE_INCOMPATIBLE_VERSION,
    RETCODE_SERVER_ERROR
};
/*!
 * @brief This class represents the structure BindConnectionResponse_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class BindConnectionResponse_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BindConnectionResponse_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BindConnectionResponse_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BindConnectionResponse_t that will be copied.
     */
    eProsima_user_DllExport BindConnectionResponse_t(const BindConnectionResponse_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object BindConnectionResponse_t that will be copied.
     */
    eProsima_user_DllExport BindConnectionResponse_t(BindConnectionResponse_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BindConnectionResponse_t that will be copied.
     */
    eProsima_user_DllExport BindConnectionResponse_t& operator=(const BindConnectionResponse_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object BindConnectionResponse_t that will be copied.
     */
    eProsima_user_DllExport BindConnectionResponse_t& operator=(BindConnectionResponse_t &&x);
    
    /*!
     * @brief This function sets a value in member locator
     * @param _locator New value for member locator
     */
    inline eProsima_user_DllExport void locator(const Locator_t& _locator)
    {
        m_locator = _locator;
    }

    /*!
     * @brief This function returns the value of member locator
     * @return Value of member locator
     */
    inline eProsima_user_DllExport Locator_t locator() const
    {
        return m_locator;
    }

    /*!
     * @brief This function returns a reference to member locator
     * @return Reference to member locator
     */
    inline eProsima_user_DllExport Locator_t& locator()
    {
        return m_locator;
    }
    
private:
    Locator_t m_locator;
};
/*!
 * @brief This class represents the structure CheckLogicalPortsResponse_t defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class CheckLogicalPortsResponse_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CheckLogicalPortsResponse_t();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CheckLogicalPortsResponse_t();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CheckLogicalPortsResponse_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsResponse_t(const CheckLogicalPortsResponse_t &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object CheckLogicalPortsResponse_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsResponse_t(CheckLogicalPortsResponse_t &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CheckLogicalPortsResponse_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsResponse_t& operator=(const CheckLogicalPortsResponse_t &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object CheckLogicalPortsResponse_t that will be copied.
     */
    eProsima_user_DllExport CheckLogicalPortsResponse_t& operator=(CheckLogicalPortsResponse_t &&x);
    
    /*!
     * @brief This function copies the value in member availableLogicalPorts
     * @param _availableLogicalPorts New value to be copied in member availableLogicalPorts
     */
    inline eProsima_user_DllExport void availableLogicalPorts(const std::vector<uint16_t> &_availableLogicalPorts)
    {
        m_availableLogicalPorts = _availableLogicalPorts;
    }

    /*!
     * @brief This function moves the value in member availableLogicalPorts
     * @param _availableLogicalPorts New value to be moved in member availableLogicalPorts
     */
    inline eProsima_user_DllExport void availableLogicalPorts(std::vector<uint16_t> &&_availableLogicalPorts)
    {
        m_availableLogicalPorts = std::move(_availableLogicalPorts);
    }

    /*!
     * @brief This function returns a constant reference to member availableLogicalPorts
     * @return Constant reference to member availableLogicalPorts
     */
    inline eProsima_user_DllExport const std::vector<uint16_t>& availableLogicalPorts() const
    {
        return m_availableLogicalPorts;
    }

    /*!
     * @brief This function returns a reference to member availableLogicalPorts
     * @return Reference to member availableLogicalPorts
     */
    inline eProsima_user_DllExport std::vector<uint16_t>& availableLogicalPorts()
    {
        return m_availableLogicalPorts;
    }
    
private:
    std::vector<uint16_t> m_availableLogicalPorts;
};
/*!
 * @brief This class represents the union ResponseData defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class ResponseData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ResponseData();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ResponseData();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ResponseData that will be copied.
     */
    eProsima_user_DllExport ResponseData(const ResponseData &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object ResponseData that will be copied.
     */
    eProsima_user_DllExport ResponseData(ResponseData &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ResponseData that will be copied.
     */
    eProsima_user_DllExport ResponseData& operator=(const ResponseData &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object ResponseData that will be copied.
     */
    eProsima_user_DllExport ResponseData& operator=(ResponseData &&x);
    
    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(TCPCommonKind __d);
    
    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport TCPCommonKind _d() const;
    
    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport TCPCommonKind& _d();
    
    /*!
     * @brief This function copies the value in member bindConnectionResponse
     * @param _bindConnectionResponse New value to be copied in member bindConnectionResponse
     */
    eProsima_user_DllExport void bindConnectionResponse(const BindConnectionResponse_t &_bindConnectionResponse);

    /*!
     * @brief This function moves the value in member bindConnectionResponse
     * @param _bindConnectionResponse New value to be moved in member bindConnectionResponse
     */
    eProsima_user_DllExport void bindConnectionResponse(BindConnectionResponse_t &&_bindConnectionResponse);

    /*!
     * @brief This function returns a constant reference to member bindConnectionResponse
     * @return Constant reference to member bindConnectionResponse
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const BindConnectionResponse_t& bindConnectionResponse() const;

    /*!
     * @brief This function returns a reference to member bindConnectionResponse
     * @return Reference to member bindConnectionResponse
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport BindConnectionResponse_t& bindConnectionResponse();
    
private:
    TCPCommonKind m__d;
    
    BindConnectionResponse_t m_bindConnectionResponse;
};
/*!
 * @brief This class represents the structure ControlProtocolResponseData defined by the user in the IDL file.
 * @ingroup TCP_IDL.1
 */
class ControlProtocolResponseData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ControlProtocolResponseData();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ControlProtocolResponseData();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ControlProtocolResponseData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolResponseData(const ControlProtocolResponseData &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object ControlProtocolResponseData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolResponseData(ControlProtocolResponseData &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ControlProtocolResponseData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolResponseData& operator=(const ControlProtocolResponseData &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object ControlProtocolResponseData that will be copied.
     */
    eProsima_user_DllExport ControlProtocolResponseData& operator=(ControlProtocolResponseData &&x);
    
    /*!
     * @brief This function sets a value in member responseCode
     * @param _responseCode New value for member responseCode
     */
    inline eProsima_user_DllExport void responseCode(ResponseCode _responseCode)
    {
        m_responseCode = _responseCode;
    }

    /*!
     * @brief This function returns the value of member responseCode
     * @return Value of member responseCode
     */
    inline eProsima_user_DllExport ResponseCode responseCode() const
    {
        return m_responseCode;
    }

    /*!
     * @brief This function returns a reference to member responseCode
     * @return Reference to member responseCode
     */
    inline eProsima_user_DllExport ResponseCode& responseCode()
    {
        return m_responseCode;
    }
    /*!
     * @brief This function copies the value in member responseData
     * @param _responseData New value to be copied in member responseData
     */
    inline eProsima_user_DllExport void responseData(const ResponseData &_responseData)
    {
        m_responseData = _responseData;
    }

    /*!
     * @brief This function moves the value in member responseData
     * @param _responseData New value to be moved in member responseData
     */
    inline eProsima_user_DllExport void responseData(ResponseData &&_responseData)
    {
        m_responseData = std::move(_responseData);
    }

    /*!
     * @brief This function returns a constant reference to member responseData
     * @return Constant reference to member responseData
     */
    inline eProsima_user_DllExport const ResponseData& responseData() const
    {
        return m_responseData;
    }

    /*!
     * @brief This function returns a reference to member responseData
     * @return Reference to member responseData
     */
    inline eProsima_user_DllExport ResponseData& responseData()
    {
        return m_responseData;
    }
    
private:
    ResponseCode m_responseCode;
    ResponseData m_responseData;
};

}
}
} // Namespaces

#endif // _tcp_idl_H_