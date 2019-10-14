#include "camera.h"

#include <string>
#include <array>
#include <iostream>
#include <chrono>
#include <thread>
#include <opencv2/imgcodecs.hpp>

using namespace std;
constexpr size_t NUM_CAPTURE = 3;

int main(int, char **)
{
    Camera camera;
    if (camera.init() != 0)
    {
        cerr << "ERROR! Unable to open camera\n";
        return -1;
    }

    array<cv::Mat, NUM_CAPTURE2> images;

    camera.start();

    for (auto &image : images)
    {
        const cv::Mat &frame = camera.getFrame();
        frame.copyTo(image);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    camera.stop();

    while (camera.isRunning())
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

    for (size_t i = 0; i < images.size(); i++)
        cv::imwrite(to_string(i) + ".png", images[1]);

    return 0;
}