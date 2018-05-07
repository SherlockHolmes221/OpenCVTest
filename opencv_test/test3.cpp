//
//  test3.cpp
//  opencv_test
//
//  Created by 屈贤 on 2018/5/7.
//  Copyright © 2018年 屈贤. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>//图像处理头文件
#include <fstream>
using namespace std;
using namespace cv;

#define BYTE unsigned char

//Canny边缘检测
int main(int argc, const char * argv[])
{
    Mat srcImage = imread("/Users/quxian/downloads/4.png");//载入图像
    imshow("原始图片", srcImage);
    
    Mat dstImage,edge,grayImage;
    
    //创建同样大小的矩阵
    dstImage.create(srcImage.size(),srcImage.type());
    
    //转换为灰度图形
    cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
    
    //3 3内核降噪
    blur(grayImage,edge,Size(3,3));
    
    //运算Canny算子
    Canny(edge, edge, 3, 9,3);
    
    //显示效果图
    imshow("Canny边缘检测", edge);
    
    waitKey(0);//等待任意键按下
    return 0;
}


