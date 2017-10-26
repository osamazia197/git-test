#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/imgproc.hpp>  
using namespace std;
using namespace cv;
int main()
{
	Mat img = imread("index.png");
	cvtColor(img, img, CV_BGR2GRAY);
	imshow("image",img);

	cv::waitKey(10);

	return 0;
}