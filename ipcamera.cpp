#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
 
int main() {
VideoCapture stream1("http://192.168.43.1:8080/videofeed?something.mjpeg");  //Replace with ip:port provided in your app
 
if (!stream1.isOpened()) {
cout << "cannot open camera";
}
 
while (true) {
Mat image;
stream1.read(image);
imshow("live feed", image);
cv::waitKey(1000);
}

return 0;

}
