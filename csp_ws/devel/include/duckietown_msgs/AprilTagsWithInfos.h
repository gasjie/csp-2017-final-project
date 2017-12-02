// Generated by gencpp from file duckietown_msgs/AprilTagsWithInfos.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H
#define DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <duckietown_msgs/AprilTagDetection.h>
#include <duckietown_msgs/TagInfo.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AprilTagsWithInfos_
{
  typedef AprilTagsWithInfos_<ContainerAllocator> Type;

  AprilTagsWithInfos_()
    : header()
    , detections()
    , infos()  {
    }
  AprilTagsWithInfos_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)
    , infos(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;

   typedef std::vector< ::duckietown_msgs::TagInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::other >  _infos_type;
  _infos_type infos;




  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagsWithInfos_

typedef ::duckietown_msgs::AprilTagsWithInfos_<std::allocator<void> > AprilTagsWithInfos;

typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos > AprilTagsWithInfosPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos const> AprilTagsWithInfosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/robotvision/csp_project/csp_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f8211436af5ad17072ef13086108bc6";
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f8211436af5ad17ULL;
  static const uint64_t static_value2 = 0x072ef13086108bc6ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AprilTagsWithInfos";
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
duckietown_msgs/AprilTagDetection[] detections\n\
duckietown_msgs/TagInfo[] infos\n\
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
\n\
================================================================================\n\
MSG: duckietown_msgs/AprilTagDetection\n\
int32 id\n\
float64 size\n\
geometry_msgs/PoseStamped pose\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: duckietown_msgs/TagInfo\n\
Header header\n\
int32 id\n\
\n\
# (StreetName, TrafficSign, Localization, Vehicle…)\n\
uint8 tag_type\n\
\n\
uint8 S_NAME=0\n\
uint8 SIGN=1	\n\
uint8 LIGHT=2\n\
uint8 LOCALIZE=3\n\
uint8 VEHICLE=4\n\
\n\
string street_name\n\
\n\
uint8 traffic_sign_type\n\
# (12 possible traffic sign types)\n\
\n\
uint8 STOP=5\n\
uint8 YIELD=6\n\
uint8 NO_RIGHT_TURN=7\n\
uint8 NO_LEFT_TURN=8\n\
uint8 ONEWAY_RIGHT=9\n\
uint8 ONEWAY_LEFT=10\n\
uint8 FOUR_WAY=11\n\
uint8 RIGHT_T_INTERSECT=12\n\
uint8 LEFT_T_INTERSECT=13\n\
uint8 T_INTERSECTION=14\n\
uint8 DO_NOT_ENTER=15\n\
uint8 PEDESTRIAN=16\n\
uint8 T_LIGHT_AHEAD=17\n\
uint8 DUCK_CROSSING=18\n\
\n\
string vehicle_name\n\
\n\
# Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.\n\
float32 location\n\
";
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
      stream.next(m.infos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AprilTagsWithInfos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
    s << indent << "infos[]" << std::endl;
    for (size_t i = 0; i < v.infos.size(); ++i)
    {
      s << indent << "  infos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.infos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H
