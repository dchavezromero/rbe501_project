// Generated by gencpp from file kinematics/MoveJointRequest.msg
// DO NOT EDIT!


#ifndef KINEMATICS_MESSAGE_MOVEJOINTREQUEST_H
#define KINEMATICS_MESSAGE_MOVEJOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kinematics/joint_angles.h>

namespace kinematics
{
template <class ContainerAllocator>
struct MoveJointRequest_
{
  typedef MoveJointRequest_<ContainerAllocator> Type;

  MoveJointRequest_()
    : joint_set_points()  {
    }
  MoveJointRequest_(const ContainerAllocator& _alloc)
    : joint_set_points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kinematics::joint_angles_<ContainerAllocator>  _joint_set_points_type;
  _joint_set_points_type joint_set_points;





  typedef boost::shared_ptr< ::kinematics::MoveJointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinematics::MoveJointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveJointRequest_

typedef ::kinematics::MoveJointRequest_<std::allocator<void> > MoveJointRequest;

typedef boost::shared_ptr< ::kinematics::MoveJointRequest > MoveJointRequestPtr;
typedef boost::shared_ptr< ::kinematics::MoveJointRequest const> MoveJointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinematics::MoveJointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinematics::MoveJointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kinematics::MoveJointRequest_<ContainerAllocator1> & lhs, const ::kinematics::MoveJointRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_set_points == rhs.joint_set_points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kinematics::MoveJointRequest_<ContainerAllocator1> & lhs, const ::kinematics::MoveJointRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kinematics

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kinematics::MoveJointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinematics::MoveJointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinematics::MoveJointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinematics::MoveJointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinematics::MoveJointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinematics::MoveJointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinematics::MoveJointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d79d8a7ed95cb38190b2abaabcce5da1";
  }

  static const char* value(const ::kinematics::MoveJointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd79d8a7ed95cb381ULL;
  static const uint64_t static_value2 = 0x90b2abaabcce5da1ULL;
};

template<class ContainerAllocator>
struct DataType< ::kinematics::MoveJointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinematics/MoveJointRequest";
  }

  static const char* value(const ::kinematics::MoveJointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinematics::MoveJointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "joint_angles joint_set_points\n"
"\n"
"================================================================================\n"
"MSG: kinematics/joint_angles\n"
"float64 theta1\n"
"float64 theta2\n"
"float64 theta3\n"
"float64 theta4\n"
"float64 theta5\n"
"float64 theta6\n"
"float64 theta7\n"
;
  }

  static const char* value(const ::kinematics::MoveJointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinematics::MoveJointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_set_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveJointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinematics::MoveJointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinematics::MoveJointRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_set_points: ";
    s << std::endl;
    Printer< ::kinematics::joint_angles_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_set_points);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINEMATICS_MESSAGE_MOVEJOINTREQUEST_H
