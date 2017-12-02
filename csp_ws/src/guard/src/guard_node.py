import rospy

class Guard:
    def __init__(self):
        self.sub_ntf = rospy.Subscriber()
        self.sub_obj_rec = rospy.Subsriber()
        self.pub_ntf = rospy.Publisher()
        self.pub_obj_rec = rospy.Publisher()
        self.pub_lane_ctr = rospy.Publisher()
        self.pub_obj_ctr = rospy.Publisher()
if __name__ == '__main__':
    pass
