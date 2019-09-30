#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <array>
#include <iostream>
#include <sstream>

using namespace cv;
using namespace std;

int main()
{
    constexpr int sz[] = {10, 256, 256};
    Mat image(3, sz, CV_8U, Scalar::all(0));

    auto data = image.data;
    auto sizes = image.size;
    auto steps = image.step;

    for (int i0 = 0; i0 < sizes[0]; i0++)
    {
        const int step0 = i0 * steps[0];
        for (int i1 = 0; i1 < sizes[1]; i1++)
        {
            const int step1 = i1 * steps[1];
            for (int i2 = 0; i2 < sizes[2]; i2++)
            {
                data[step0 + step1 + i2] = (step0 + step1 + i2) % 256;
            }
        }
    }

    for (int i0 = 0; i0 < sizes[0]; i0++)
    {
        const int step0 = i0 * steps[0];
        Mat slice(256, 256, CV_8U, data + step0);
        stringstream ss;
        ss << "out/out" << i0 << ".png";

        imwrite(ss.str(), slice);
    }

    return 0;
}
