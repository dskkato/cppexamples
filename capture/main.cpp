#include "camera.h"

#include <string>
#include <array>
#include <iostream>
#include <chrono>
#include <thread>
#include <opencv2/imgcodecs.hpp>

using namespace std;

int main(int, char **)
{
    Camera camera;
    if (camera.init() != 0)
    {
        cerr << "ERROR! Unable to open camera\n";
        return -1;
    }

    array<cv::Mat, 2> images;

    camera.start();

    for (auto i : {1, 2})
    {
        const cv::Mat &frame = camera.getFrame();
        frame.copyTo(images[i - 1]);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    camera.stop();

    while (camera.isRunning())
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

    cv::imwrite("0.png", images[0]);
    cv::imwrite("1.png", images[1]);

    return 0;
}