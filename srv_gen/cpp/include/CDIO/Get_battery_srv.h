/* Auto-generated by genmsg_cpp for file /home/redfox/Desktop/CDIO/srv/Get_battery_srv.srv */
#ifndef CDIO_SERVICE_GET_BATTERY_SRV_H
#define CDIO_SERVICE_GET_BATTERY_SRV_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace CDIO
{
template <class ContainerAllocator>
struct Get_battery_srvRequest_ {
  typedef Get_battery_srvRequest_<ContainerAllocator> Type;

  Get_battery_srvRequest_()
  : batteryPercent(0.0)
  {
  }

  Get_battery_srvRequest_(const ContainerAllocator& _alloc)
  : batteryPercent(0.0)
  {
  }

  typedef float _batteryPercent_type;
  float batteryPercent;


  typedef boost::shared_ptr< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CDIO::Get_battery_srvRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct Get_battery_srvRequest
typedef  ::CDIO::Get_battery_srvRequest_<std::allocator<void> > Get_battery_srvRequest;

typedef boost::shared_ptr< ::CDIO::Get_battery_srvRequest> Get_battery_srvRequestPtr;
typedef boost::shared_ptr< ::CDIO::Get_battery_srvRequest const> Get_battery_srvRequestConstPtr;



template <class ContainerAllocator>
struct Get_battery_srvResponse_ {
  typedef Get_battery_srvResponse_<ContainerAllocator> Type;

  Get_battery_srvResponse_()
  {
  }

  Get_battery_srvResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CDIO::Get_battery_srvResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct Get_battery_srvResponse
typedef  ::CDIO::Get_battery_srvResponse_<std::allocator<void> > Get_battery_srvResponse;

typedef boost::shared_ptr< ::CDIO::Get_battery_srvResponse> Get_battery_srvResponsePtr;
typedef boost::shared_ptr< ::CDIO::Get_battery_srvResponse const> Get_battery_srvResponseConstPtr;


struct Get_battery_srv
{

typedef Get_battery_srvRequest Request;
typedef Get_battery_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Get_battery_srv
} // namespace CDIO

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CDIO::Get_battery_srvRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d9d979398f77f188497919a4fccf58f9";
  }

  static const char* value(const  ::CDIO::Get_battery_srvRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd9d979398f77f188ULL;
  static const uint64_t static_value2 = 0x497919a4fccf58f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CDIO/Get_battery_srvRequest";
  }

  static const char* value(const  ::CDIO::Get_battery_srvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 batteryPercent\n\
\n\
\n\
";
  }

  static const char* value(const  ::CDIO::Get_battery_srvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CDIO::Get_battery_srvResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::CDIO::Get_battery_srvResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CDIO/Get_battery_srvResponse";
  }

  static const char* value(const  ::CDIO::Get_battery_srvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::CDIO::Get_battery_srvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CDIO::Get_battery_srvRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.batteryPercent);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Get_battery_srvRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CDIO::Get_battery_srvResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Get_battery_srvResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CDIO::Get_battery_srv> {
  static const char* value() 
  {
    return "d9d979398f77f188497919a4fccf58f9";
  }

  static const char* value(const CDIO::Get_battery_srv&) { return value(); } 
};

template<>
struct DataType<CDIO::Get_battery_srv> {
  static const char* value() 
  {
    return "CDIO/Get_battery_srv";
  }

  static const char* value(const CDIO::Get_battery_srv&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CDIO::Get_battery_srvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d9d979398f77f188497919a4fccf58f9";
  }

  static const char* value(const CDIO::Get_battery_srvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CDIO::Get_battery_srvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CDIO/Get_battery_srv";
  }

  static const char* value(const CDIO::Get_battery_srvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CDIO::Get_battery_srvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d9d979398f77f188497919a4fccf58f9";
  }

  static const char* value(const CDIO::Get_battery_srvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CDIO::Get_battery_srvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CDIO/Get_battery_srv";
  }

  static const char* value(const CDIO::Get_battery_srvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CDIO_SERVICE_GET_BATTERY_SRV_H

