#pragma once
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

#include <future>

constexpr size_t FPS = 30;
constexpr size_t WAIT_MS = 1000 / FPS;

class Camera
{
public:
    Camera();
    ~Camera() = default;

    int init();
    void release();
    bool capture();
    void start();
    void stop();
    bool isRunning() const;
    const cv::Mat &getFrame();

private:
    cv::Mat frame;
    cv::VideoCapture cap;

    int device_id;
    int api_id;
    bool running;

    std::future<void> fut;
};
