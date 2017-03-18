# opencv-ip-webcam
Stream video with OpenCV from android IP Webcam

- OpenCV 3.2.0 (Don't forget to compile OpenCV with ffmpeg so it can decode video)
- Download app from https://play.google.com/store/apps/details?id=com.pas.webcam&hl=en
- Launch server and replace URL in ipcamera.cpp
- In terminal, type :

$ g++ `pkg-config --cflags opencv` -o ipcamera ipcamera.cpp `pkg-config --libs opencv`

$ ./ipcamera

  Voilà
