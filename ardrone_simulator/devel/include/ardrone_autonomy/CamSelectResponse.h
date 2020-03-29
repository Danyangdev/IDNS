// Generated by gencpp from file ardrone_autonomy/CamSelectResponse.msg
// DO NOT EDIT!


#ifndef ARDRONE_AUTONOMY_MESSAGE_CAMSELECTRESPONSE_H
#define ARDRONE_AUTONOMY_MESSAGE_CAMSELECTRESPONSE_H


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
struct CamSelectResponse_
{
  typedef CamSelectResponse_<ContainerAllocator> Type;

  CamSelectResponse_()
    : result(false)  {
    }
  CamSelectResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CamSelectResponse_

typedef ::ardrone_autonomy::CamSelectResponse_<std::allocator<void> > CamSelectResponse;

typedef boost::shared_ptr< ::ardrone_autonomy::CamSelectResponse > CamSelectResponsePtr;
typedef boost::shared_ptr< ::ardrone_autonomy::CamSelectResponse const> CamSelectResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/CamSelectResponse";
  }

  static const char* value(const ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n\
\n\
";
  }

  static const char* value(const ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CamSelectResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::CamSelectResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_CAMSELECTRESPONSE_H
