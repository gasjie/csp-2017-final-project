import rospy
import numpy as np
from geometry_msgs.msg import Point
from duckietown_msgs.msg import AprilTagDetectionArray
class Guard:
    def __init__(self):
        #initialize
        self.state="patrol"
        self.controling=False
        #subscriber
        self.sub_ntf = rospy.Subscriber("fuckwhere",Twist2DStamped,self.usr_ctr)
        self.sub_obj_rec = rospy.Subsriber("fuckwhere",fucktype,self.obj_rec)
        self.sub_tag_rec = rospy.Subsriber("fuckwhere",
                                            AprilTagDetectionArray,
                                            self.tag_rec)
        #publisher
        self.pub_ntf = rospy.Publisher("fuckwhere",fucktype,queue_size=fuckwhat)
        self.pub_obj_rec = rospy.Publisher("fuckwhere",
                                            fucktype,
                                            queue_size=fuckwhat)
        self.pub_lane_ctr = rospy.Publisher("fuckwhere",
                                             fucktype,
                                             queue_size=fuckwhat)
        self.pub_obj_ctr = rospy.Publisher("fuckwhere",Point,queue_size=1)
        self.pub_wheel_ctr = rospy.Publisher("fuckwhere",Twist2DStamped,queue_size=1)
        self.work()
    def work(self):#main function
        if(self.state == "patrol"):
            self.patrol()
        elif(self.state == "chase"):
            self.chase()
        elif(self.state == "job"):
            self.job()
        elif(self.state == "user"):
            self.user()
        else
    def usr_ctr(self,msg==None):
        if(msg ==None):
            return
        self.state="user"
        controling=True
    def obj_rec(self,msg):
        if(controling):
            return
        find=msg.fuckwhat
        if(find):
            pos = Point()
            pos = msg.fuckwhat
            self.state="chase"
            self.obj_pos=pos
    def tag_rec(self,msg):
        if(controling):
            return
        find=msg.fuckwhat
        if(find):
            pos = Point()
            pos = msg.fuckwhat
            self.state="job"
            self.tag_pos=pos
            
if __name__ == '__main__':
    pass
