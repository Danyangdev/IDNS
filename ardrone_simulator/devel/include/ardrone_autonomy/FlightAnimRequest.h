// Generated by gencpp from file ardrone_autonomy/FlightAnimRequest.msg
// DO NOT EDIT!


#ifndef ARDRONE_AUTONOMY_MESSAGE_FLIGHTANIMREQUEST_H
#define ARDRONE_AUTONOMY_MESSAGE_FLIGHTANIMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ardrone_autonomy
{
template <class ContainerAllocator>
struct FlightAnimRequest_
{
  typedef FlightAnimRequest_<ContainerAllocator> Type;

  FlightAnimRequest_()
    : type(0)
    , duration(0)  {
    }
  FlightAnimRequest_(const ContainerAllocator& _alloc)
    : type(0)
    , duration(0)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef uint32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FlightAnimRequest_

typedef ::ardrone_autonomy::FlightAnimRequest_<std::allocator<void> > FlightAnimRequest;

typedef boost::shared_ptr< ::ardrone_autonomy::FlightAnimRequest > FlightAnimRequestPtr;
typedef boost::shared_ptr< ::ardrone_autonomy::FlightAnimRequest const> FlightAnimRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ardrone_autonomy': ['/home/zhu/ardrone_simulator/src/ardrone_autonomy-indigo-devel/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1babbb93af7ae39105f8dba705eb91ac";
  }

  static const char* value(const ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1babbb93af7ae391ULL;
  static const uint64_t static_value2 = 0x05f8dba705eb91acULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/FlightAnimRequest";
  }

  static const char* value(const ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
uint8 type\n\
\n\
\n\
\n\
uint32 duration\n\
\n\
";
  }

  static const char* value(const ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlightAnimRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::FlightAnimRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "duration: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_FLIGHTANIMREQUEST_H
