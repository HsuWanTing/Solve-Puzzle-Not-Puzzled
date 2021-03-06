#ifndef _COLORINFO_H_
#define _COLORINFO_H_
#include <opencv2/contrib/contrib.hpp> 
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

class ColorInfo {


public:
	ColorInfo();
	ColorInfo(vector<float>);
	void ShowColorInfo();
	float ColorInfo::get_colorProportion(int color);
private:
	vector<float> _colorPrortion;
};



#endif