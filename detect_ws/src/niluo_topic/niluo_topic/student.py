import rclpy                                     # ROS2 Python接口库
from rclpy.node import Node                      # ROS2 节点类
from std_msgs.msg import String 

class PublisherNode(Node):
    
    def __init__(self, name='waya'):
        super().__init__(name)
        self.get_logger().info("大家好，我是waya")  # ROS2节点父类初始化
        self.count = 1  # 设置计数器
        
        # 创建发布者对象（消息类型、话题名、队列长度）
        self.pub = self.create_publisher(String, "Makeboat", 10)
        
        # 创建定时器，每5秒执行一次发布
        self.timer = self.create_timer(5, self.timer_callback)
        
        # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        self.sub = self.create_subscription(String, "Mingyue", self.listener_callback, 10)

    def timer_callback(self):  # 定时器回调函数
        boat = String()  # 创建一个String类型的消息对象
        boat.data = f'niluo还是niluo'  # 填充消息对象中的消息数据
        self.pub.publish(boat)  # 发布话题消息
        self.get_logger().info('Publishing: "%s"' % boat.data)  # 输出日志信息，提示已经完成话题发布

    def listener_callback(self, msg):  # 订阅回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info(f'Received message: {msg.data}')  # 输出日志信息，提示订阅收到的话题消息

def main():  # ROS2节点主入口main函数
    rclpy.init()  # ROS2 Python接口初始化
    stu_node = PublisherNode()  # 创建ROS2节点对象并进行初始化
    rclpy.spin(stu_node)  # 循环等待ROS2退出
    stu_node.destroy_node()  # 销毁节点对象
    rclpy.shutdown()  # 关闭ROS2 Python接口
 
if __name__ == '__main__':
    main()
