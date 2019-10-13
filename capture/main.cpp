#include "camera.h"

#include <string>
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

    for (auto i : {1, 2, 3, 4, 5})
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if (camera.capture() != true)
        {
            return -1;
        }

        const cv::Mat &frame = camera.getFrame();
        cv::imwrite(string("hogehgoe") + to_string(i) + ".png", frame);
    }

    return 0;
}