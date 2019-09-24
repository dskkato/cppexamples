#include <cstdio>
#include <iostream>
#include <memory>

int main()
{
    auto closer = [](auto *fp) { std::fclose(fp); };
    std::unique_ptr<std::FILE, decltype(closer)> fp(std::fopen("main.cpp", "r"), closer);

    if (fp)
    {
        char s[256];
        while (nullptr != fgets(s, 256, fp.get()))
        {
            std::cout << s;
        }
        std::cout << std::endl;
    }
    return 0;
}
