/*
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	if (!cap.isOpened())
	{
		cout << "无法启动摄像头" << endl;
		return -2;
	}
	//取得图像帧的大小
	Size S = Size((int)cap.get(CV_CAP_PROP_FRAME_HEIGHT),
		(int)cap.get(CV_CAP_PROP_FRAME_HEIGHT));
	//建立并初始化视频存储对象
	VideoWriter put("C:\\Users\\不懂别瞎说\\source\\repos\\OpencvText\\OpencvText\\output1.avi", CV_FOURCC('M', 'P', '4', '2'), 30, S);
	
	if (!put.isOpened())
	{
		cout << "无法产生视频文件" << endl;
		return -1;

	}
	namedWindow("Video");
	//开始拍摄
	while (char(waitKey(1)) != 'q' && cap.isOpened())
	{
		Mat frame;
		cap >> frame;
		//检查摄像头是否结束拍摄
		if (frame.empty())
		{
			break;
		}
		imshow("Video", frame);
		put << frame;
	}
	return 0;
}*/