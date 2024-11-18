import cv2

def find_available_cameras(max_cameras=10):
    available_cameras = []
    for camera_id in range(max_cameras):
        cap = cv2.VideoCapture(camera_id)
        if cap.isOpened():
            available_cameras.append(camera_id)
            cap.release()  # 释放摄像头资源
    return available_cameras

def main():
    print("正在检测可用摄像头...")
    available_cameras = find_available_cameras()

    if available_cameras:
        print(f"检测到以下可用摄像头ID: {available_cameras}")
    else:
        print("未检测到任何摄像头！")

if __name__ == "__main__":
    main()

