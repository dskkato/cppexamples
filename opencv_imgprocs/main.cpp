#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

constexpr const char *filename = "data/lena.png";
constexpr const char *out = "out/lena.jpg";

int main()
{
    cv::Mat mat = cv::imread(filename);
    if (mat.empty())
        return 1;

    auto ret = cv::imwrite(out, mat);
    if (!ret)
        return 2;

    return 0;
}
