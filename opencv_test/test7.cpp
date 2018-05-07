////
////  test7.cpp
////  opencv_test
////
////  Created by 屈贤 on 2018/5/7.
////  Copyright © 2018年 屈贤. All rights reserved.
////
//
////生成一幅照片并写入当前工程目录
#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;

void createAlphaMat(Mat &mat){
    for (int i = 0; i<mat.rows; ++i) {
        for(int j = 0;j<mat.cols;++j){
            Vec4b&rgba = mat.at<Vec4b>(i,j);
            rgba[0] = UCHAR_MAX;
            rgba[1] = saturate_cast<uchar>((float(mat.cols-j))/((float)mat.cols)*UCHAR_MAX);
            rgba[2] = saturate_cast<uchar>((float(mat.rows-i))/((float)mat.rows)*UCHAR_MAX);
            rgba[3] = saturate_cast<uchar>(0.5*(rgba[1]+rgba[2]));
        }
    }
}

int main(){
    //创建带alpha通道的mat
    Mat mat(480,640,CV_8UC4);
    //第调用函数
    createAlphaMat(mat);
    
    //设置参数
    vector <int> compression_params;
    compression_params.push_back(IMWRITE_PNG_COMPRESSION);
    compression_params.push_back(9);
    
    try{
        imwrite("./5.png", mat,compression_params);
        imshow("生成的图片", mat);
        fprintf(stdout, "已经生成图片在工程目录下\n");
        waitKey(0);
        
    }catch(runtime_error& e){
        fprintf(stderr, "图像转换成PNG格式发生错误\n");
        return 1;
    }
    return 0;
}
