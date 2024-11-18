import cv2

def main():
    # 打开摄像头（设备ID通常为0，代表默认摄像头）
    cap = cv2.VideoCapture(2)

    # 检查摄像头是否成功打开
    if not cap.isOpened():
        print("无法打开摄像头")
        return

    print("按下 'q' 键退出窗口")
    
    while True:
        # 读取摄像头帧
        ret, frame = cap.read()

        # 检查是否成功读取帧
        if not ret:
            print("无法接收视频帧")
            break

        # 在窗口显示摄像头画面
        cv2.imshow('Camera Feed', frame)

        # 按下 'q' 键退出
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # 释放摄像头资源
    cap.release()
    # 关闭所有窗口
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()

