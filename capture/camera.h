#pragma once
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

class Camera
{
public:
    Camera();
    ~Camera() = default;

    int init();
    bool capture();
    const cv::Mat &getFrame();

private:
    cv::Mat frame;
    cv::VideoCapture cap;

    int device_id;
    int api_id;
};
