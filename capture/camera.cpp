#include "camera.h"
#include <chrono>
#include <thread>

Camera::Camera() : device_id(0), api_id(cv::CAP_ANY)
{
}

int Camera::init()
{
    cap.open(device_id + api_id);
    // check if we succeeded
    if (!cap.isOpened())
    {
        return -1;
    }
    // wait 1 sec to avoid blank image capture
    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}

bool Camera::capture()
{
    if (cap.read(frame) != true)
    {
        return false;
    }
    if (frame.empty())
    {
        return false;
    }
    return true;
}

const cv::Mat &Camera::getFrame()
{
    return frame;
}