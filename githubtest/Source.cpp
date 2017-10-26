#include <iostream>
#include "opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;
int main()
{
	Mat img = imread("index.png");
	imshow("image",img);
	cv::waitKey();

	return 0;
}