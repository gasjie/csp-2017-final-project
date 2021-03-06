// Generated by gencpp from file duckietown_msgs/DuckieSensor.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_DUCKIESENSOR_H
#define DUCKIETOWN_MSGS_MESSAGE_DUCKIESENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct DuckieSensor_
{
  typedef DuckieSensor_<ContainerAllocator> Type;

  DuckieSensor_()
    : value(0)
    , fvalue(0.0)
    , is_analog(false)
    , name()  {
    }
  DuckieSensor_(const ContainerAllocator& _alloc)
    : value(0)
    , fvalue(0.0)
    , is_analog(false)
    , name(_alloc)  {
    }



   typedef uint16_t _value_type;
  _value_type value;

   typedef float _fvalue_type;
  _fvalue_type fvalue;

   typedef uint8_t _is_analog_type;
  _is_analog_type is_analog;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;




  typedef boost::shared_ptr< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> const> ConstPtr;

}; // struct DuckieSensor_

typedef ::duckietown_msgs::DuckieSensor_<std::allocator<void> > DuckieSensor;

typedef boost::shared_ptr< ::duckietown_msgs::DuckieSensor > DuckieSensorPtr;
typedef boost::shared_ptr< ::duckietown_msgs::DuckieSensor const> DuckieSensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::DuckieSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/robotvision/csp_project/csp_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3337f0684bf5f2b309fb6921917219f7";
  }

  static const char* value(const ::duckietown_msgs::DuckieSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3337f0684bf5f2b3ULL;
  static const uint64_t static_value2 = 0x09fb6921917219f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/DuckieSensor";
  }

  static const char* value(const ::duckietown_msgs::DuckieSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sensors send value and type messages\n\
# For analog sensors value = 0..4097 and fvalue = 0.0..1.0\n\
# For digital sensors value= 0..1 and fvalue = 0.0\n\
uint16 value\n\
float32 fvalue\n\
bool is_analog\n\
string name\n\
";
  }

  static const char* value(const ::duckietown_msgs::DuckieSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
      stream.next(m.fvalue);
      stream.next(m.is_analog);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DuckieSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::DuckieSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::DuckieSensor_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.value);
    s << indent << "fvalue: ";
    Printer<float>::stream(s, indent + "  ", v.fvalue);
    s << indent << "is_analog: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_analog);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_DUCKIESENSOR_H
