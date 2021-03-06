#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <cstring>

#include <opencv2/contrib/contrib.hpp> 
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/legacy/legacy.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/nonfree/features2d.hpp>

#include "ColorInfo.h"
using namespace std;
using namespace cv;

#define COLOR_RANGE 256

bool sortCompare(const vector<float> &first, const vector<float> &second);

extern void ImgSIFTDescriptor(Mat, int, int);
extern vector <vector<float>> SIFTAnalysis(Mat, vector <vector<float>>);
extern void SIFTAnalysis2(Mat, Mat);

vector< vector<float> >MergeResult(vector< vector<float> >, vector< vector<float> >);

void ShowResult(vector< vector<float> >);

extern vector <vector<float>> ColorAnalysis(Mat , Mat ,int ,int ,int);

extern 	vector<ColorInfo> ImgColorDescriptor(Mat , int , int,int );


#endif