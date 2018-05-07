//
//  test6.cpp
//  opencv_test
//
//  Created by 屈贤 on 2018/5/7.
//  Copyright © 2018年 屈贤. All rights reserved.
//
//
//调用摄像头Canny
//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main(){
//    //读入视频
//    VideoCapture capture(0);
//    Mat edges;
//
//    //循环显示每一帧
//    while(1){
//        //定义一个变量，存每一帧的图像
//        Mat frame;
//        //读取当前帧
//        capture>>frame;
//        //转换为灰度图像
//        cvtColor(frame, edges, CV_BGR2GRAY);
//        //使用3*3的内核降噪
//        blur(edges, edges, Size(7,7));
//        //进行Canny边缘检测并显示
//        Canny(edges,edges,0,30,3);
//        //显示当前帧
//        imshow("调用摄像头Canny", edges);
//        //延迟30秒
//        if(waitKey(30)>0){
//            break;
//        }
//    }
//    return 0;
//}
