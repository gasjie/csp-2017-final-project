// Generated by gencpp from file duckietown_msgs/SourceTargetNodes.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SOURCETARGETNODES_H
#define DUCKIETOWN_MSGS_MESSAGE_SOURCETARGETNODES_H


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
struct SourceTargetNodes_
{
  typedef SourceTargetNodes_<ContainerAllocator> Type;

  SourceTargetNodes_()
    : source_node()
    , target_node()  {
    }
  SourceTargetNodes_(const ContainerAllocator& _alloc)
    : source_node(_alloc)
    , target_node(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _source_node_type;
  _source_node_type source_node;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_node_type;
  _target_node_type target_node;




  typedef boost::shared_ptr< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> const> ConstPtr;

}; // struct SourceTargetNodes_

typedef ::duckietown_msgs::SourceTargetNodes_<std::allocator<void> > SourceTargetNodes;

typedef boost::shared_ptr< ::duckietown_msgs::SourceTargetNodes > SourceTargetNodesPtr;
typedef boost::shared_ptr< ::duckietown_msgs::SourceTargetNodes const> SourceTargetNodesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f05fda47731d8da1f80e3a499a42edf9";
  }

  static const char* value(const ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf05fda47731d8da1ULL;
  static const uint64_t static_value2 = 0xf80e3a499a42edf9ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SourceTargetNodes";
  }

  static const char* value(const ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string source_node\n\
string target_node\n\
";
  }

  static const char* value(const ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source_node);
      stream.next(m.target_node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SourceTargetNodes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::SourceTargetNodes_<ContainerAllocator>& v)
  {
    s << indent << "source_node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.source_node);
    s << indent << "target_node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SOURCETARGETNODES_H
