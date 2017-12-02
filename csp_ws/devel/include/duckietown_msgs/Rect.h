// Generated by gencpp from file duckietown_msgs/Rect.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_RECT_H
#define DUCKIETOWN_MSGS_MESSAGE_RECT_H


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
struct Rect_
{
  typedef Rect_<ContainerAllocator> Type;

  Rect_()
    : x(0)
    , y(0)
    , w(0)
    , h(0)  {
    }
  Rect_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , w(0)
    , h(0)  {
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef int32_t _w_type;
  _w_type w;

   typedef int32_t _h_type;
  _h_type h;




  typedef boost::shared_ptr< ::duckietown_msgs::Rect_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Rect_<ContainerAllocator> const> ConstPtr;

}; // struct Rect_

typedef ::duckietown_msgs::Rect_<std::allocator<void> > Rect;

typedef boost::shared_ptr< ::duckietown_msgs::Rect > RectPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Rect const> RectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Rect_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/robotvision/csp_project/csp_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a7147213b29db1bb19b0427bbb901ac";
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a7147213b29db1bULL;
  static const uint64_t static_value2 = 0xb19b0427bbb901acULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Rect";
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# all in pixel coordinate\n\
# (x, y, w, h) defines a rectangle\n\
int32 x\n\
int32 y\n\
int32 w\n\
int32 h\n\
";
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Rect_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.w);
      stream.next(m.h);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Rect_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Rect_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "w: ";
    Printer<int32_t>::stream(s, indent + "  ", v.w);
    s << indent << "h: ";
    Printer<int32_t>::stream(s, indent + "  ", v.h);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_RECT_H
