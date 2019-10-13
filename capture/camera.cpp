#include "camera.h"
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

Camera::Camera() : device_id(0),
                   api_id(cv::CAP_ANY),
                   running(false)
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
    cap.set(cv::CAP_PROP_FPS, FPS);

    return 0;
}

void Camera::release()
{
    cap.release();
}

void Camera::start()
{
    if (running)
    {
        return;
    }
    running = true;
    fut = std::async(std::launch::async, [&]() {
        while (this->running)
        {
            // std::this_thread::sleep_for(std::chrono::milliseconds(WAIT_MS));

            if (this->capture() != true)
                cout << "failed to capture" << endl;
        }
        cout << "finished" << endl;
    });
    // wait 1 sec to avoid blank image capture
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

void Camera::stop()
{
    running = false;
    fut.get();
}

bool Camera::capture()
{
    cout << "capture()" << endl;
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

bool Camera::isRunning() const
{
    return running;
}

const cv::Mat &Camera::getFrame()
{
    cout << "getFrame()" << endl;
    return frame;
}