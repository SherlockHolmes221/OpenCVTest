//
//  test1.cpp
//  opencv_test
//
//  Created by 屈贤 on 2018/5/7.
//  Copyright © 2018年 屈贤. All rights reserved.
//

//#include <iostream>
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>//图像处理头文件
//#include <fstream>
//using namespace std;
//using namespace cv;
//
//#define BYTE unsigned char

//腐蚀操作
//int main(int argc, const char * argv[])
//{
//    Mat srcImage = imread("/Users/quxian/downloads/4.png");//载入图像
//    imshow("原始图片", srcImage);//显示图像
//    //进行腐蚀操作
//    Mat element = getStructuringElement(MORPH_RECT, Size(15,15));
//    Mat dstImage;
//    erode(srcImage,dstImage,element);
//    //显示效果图
//    imshow("腐蚀操作", dstImage);
//    
//    waitKey(0);//等待任意键按下
//    return 0;
//}
