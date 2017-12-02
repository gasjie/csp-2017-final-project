import rospy
import numpy as np
from geometry_msgs.msg import Point
class Guard:
    def __init__(self):
        #initialize
        self.state="patrol"
        #subscriber
        self.sub_ntf = rospy.Subscriber("fuckwhere",Twist2DStamped,self.user_ctr)
        self.sub_obj_rec = rospy.Subsriber("fuckwhere",fucktype,self.obj_rec)
        #publisher
        self.pub_ntf = rospy.Publisher()
        self.pub_obj_rec = rospy.Publisher()
        self.pub_lane_ctr = rospy.Publisher()
        self.pub_obj_ctr = rospy.Publisher()
        self.pub_wheel_ctr = rospy.Publisher()
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
            print "fuckFuckFUCK"
    def patrol(self):
        pass
    def chase(self):
        pass
    def job(self):
        pass
    def user(self):
        pass
    def user_ctr(self, msg=None):
        if(msg == None):
            return
        self.state="user"
    def obj_rec(self,msg):
        find=msg.fuckwhat
        if(find):
            pos = Point()
            pos = msg.fuckwhat
            self.state="chase"
            self.pub_obj_ctr.publish(pos)

            
if __name__ == '__main__':
    pass
