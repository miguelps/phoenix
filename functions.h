#include <opencv2/core/core.hpp>

using namespace cv;

void rgb_borders(Mat &src);

void hsv_histogram(Mat &src, Mat &dst, bool whitebg = false);

void lab_histogram(Mat &src, Mat &dst, bool whitebg = false);