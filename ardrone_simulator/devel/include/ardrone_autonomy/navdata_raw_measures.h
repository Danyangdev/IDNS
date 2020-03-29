// Generated by gencpp from file ardrone_autonomy/navdata_raw_measures.msg
// DO NOT EDIT!


#ifndef ARDRONE_AUTONOMY_MESSAGE_NAVDATA_RAW_MEASURES_H
#define ARDRONE_AUTONOMY_MESSAGE_NAVDATA_RAW_MEASURES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ardrone_autonomy
{
template <class ContainerAllocator>
struct navdata_raw_measures_
{
  typedef navdata_raw_measures_<ContainerAllocator> Type;

  navdata_raw_measures_()
    : header()
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , raw_gyros()
    , raw_gyros_110()
    , vbat_raw(0)
    , us_debut_echo(0)
    , us_fin_echo(0)
    , us_association_echo(0)
    , us_distance_echo(0)
    , us_courbe_temps(0)
    , us_courbe_valeur(0)
    , us_courbe_ref(0)
    , flag_echo_ini(0)
    , nb_echo(0)
    , sum_echo(0)
    , alt_temp_raw(0)
    , gradient(0)  {
    }
  navdata_raw_measures_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , raw_gyros(_alloc)
    , raw_gyros_110(_alloc)
    , vbat_raw(0)
    , us_debut_echo(0)
    , us_fin_echo(0)
    , us_association_echo(0)
    , us_distance_echo(0)
    , us_courbe_temps(0)
    , us_courbe_valeur(0)
    , us_courbe_ref(0)
    , flag_echo_ini(0)
    , nb_echo(0)
    , sum_echo(0)
    , alt_temp_raw(0)
    , gradient(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _drone_time_type;
  _drone_time_type drone_time;

   typedef uint16_t _tag_type;
  _tag_type tag;

   typedef uint16_t _size_type;
  _size_type size;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _raw_gyros_type;
  _raw_gyros_type raw_gyros;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _raw_gyros_110_type;
  _raw_gyros_110_type raw_gyros_110;

   typedef uint32_t _vbat_raw_type;
  _vbat_raw_type vbat_raw;

   typedef uint16_t _us_debut_echo_type;
  _us_debut_echo_type us_debut_echo;

   typedef uint16_t _us_fin_echo_type;
  _us_fin_echo_type us_fin_echo;

   typedef uint16_t _us_association_echo_type;
  _us_association_echo_type us_association_echo;

   typedef uint16_t _us_distance_echo_type;
  _us_distance_echo_type us_distance_echo;

   typedef uint16_t _us_courbe_temps_type;
  _us_courbe_temps_type us_courbe_temps;

   typedef uint16_t _us_courbe_valeur_type;
  _us_courbe_valeur_type us_courbe_valeur;

   typedef uint16_t _us_courbe_ref_type;
  _us_courbe_ref_type us_courbe_ref;

   typedef uint16_t _flag_echo_ini_type;
  _flag_echo_ini_type flag_echo_ini;

   typedef uint16_t _nb_echo_type;
  _nb_echo_type nb_echo;

   typedef uint32_t _sum_echo_type;
  _sum_echo_type sum_echo;

   typedef int32_t _alt_temp_raw_type;
  _alt_temp_raw_type alt_temp_raw;

   typedef int16_t _gradient_type;
  _gradient_type gradient;





  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> const> ConstPtr;

}; // struct navdata_raw_measures_

typedef ::ardrone_autonomy::navdata_raw_measures_<std::allocator<void> > navdata_raw_measures;

typedef boost::shared_ptr< ::ardrone_autonomy::navdata_raw_measures > navdata_raw_measuresPtr;
typedef boost::shared_ptr< ::ardrone_autonomy::navdata_raw_measures const> navdata_raw_measuresConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ardrone_autonomy': ['/home/zhu/ardrone_simulator/src/ardrone_autonomy-indigo-devel/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4da7145c7478d1eb84be4d5fa4acd9ca";
  }

  static const char* value(const ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4da7145c7478d1ebULL;
  static const uint64_t static_value2 = 0x84be4d5fa4acd9caULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/navdata_raw_measures";
  }

  static const char* value(const ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 drone_time\n\
uint16 tag\n\
uint16 size\n\
int16[] raw_gyros\n\
int16[] raw_gyros_110\n\
uint32 vbat_raw\n\
uint16 us_debut_echo\n\
uint16 us_fin_echo\n\
uint16 us_association_echo\n\
uint16 us_distance_echo\n\
uint16 us_courbe_temps\n\
uint16 us_courbe_valeur\n\
uint16 us_courbe_ref\n\
uint16 flag_echo_ini\n\
uint16 nb_echo\n\
uint32 sum_echo\n\
int32 alt_temp_raw\n\
int16 gradient\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.drone_time);
      stream.next(m.tag);
      stream.next(m.size);
      stream.next(m.raw_gyros);
      stream.next(m.raw_gyros_110);
      stream.next(m.vbat_raw);
      stream.next(m.us_debut_echo);
      stream.next(m.us_fin_echo);
      stream.next(m.us_association_echo);
      stream.next(m.us_distance_echo);
      stream.next(m.us_courbe_temps);
      stream.next(m.us_courbe_valeur);
      stream.next(m.us_courbe_ref);
      stream.next(m.flag_echo_ini);
      stream.next(m.nb_echo);
      stream.next(m.sum_echo);
      stream.next(m.alt_temp_raw);
      stream.next(m.gradient);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct navdata_raw_measures_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::navdata_raw_measures_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "drone_time: ";
    Printer<double>::stream(s, indent + "  ", v.drone_time);
    s << indent << "tag: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tag);
    s << indent << "size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.size);
    s << indent << "raw_gyros[]" << std::endl;
    for (size_t i = 0; i < v.raw_gyros.size(); ++i)
    {
      s << indent << "  raw_gyros[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.raw_gyros[i]);
    }
    s << indent << "raw_gyros_110[]" << std::endl;
    for (size_t i = 0; i < v.raw_gyros_110.size(); ++i)
    {
      s << indent << "  raw_gyros_110[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.raw_gyros_110[i]);
    }
    s << indent << "vbat_raw: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.vbat_raw);
    s << indent << "us_debut_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_debut_echo);
    s << indent << "us_fin_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_fin_echo);
    s << indent << "us_association_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_association_echo);
    s << indent << "us_distance_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_distance_echo);
    s << indent << "us_courbe_temps: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_courbe_temps);
    s << indent << "us_courbe_valeur: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_courbe_valeur);
    s << indent << "us_courbe_ref: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.us_courbe_ref);
    s << indent << "flag_echo_ini: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.flag_echo_ini);
    s << indent << "nb_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.nb_echo);
    s << indent << "sum_echo: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sum_echo);
    s << indent << "alt_temp_raw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.alt_temp_raw);
    s << indent << "gradient: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gradient);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_NAVDATA_RAW_MEASURES_H
