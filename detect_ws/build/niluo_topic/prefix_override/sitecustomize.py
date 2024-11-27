import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/interstellar/face_detect/detect_ws/install/niluo_topic'
