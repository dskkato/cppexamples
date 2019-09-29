# opencv example

This project uses OpenCV 4.

You need to install opencv beforehand by following a guide like below.

https://www.pyimagesearch.com/2018/08/17/install-opencv-4-on-macos/

Since this project does not inteneded to use OpenCV from Python, I slightly modified a building command so that there are no Python supports.

```sh
cmake -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib/modules \
    -D BUILD_opencv_python2=OFF \
    -D BUILD_opencv_python3=OFF \
    -D INSTALL_PYTHON_EXAMPLES=OFF \
    -D INSTALL_C_EXAMPLES=OFF \
    -D OPENCV_ENABLE_NONFREE=OFF \
    -D BUILD_EXAMPLES=ON ..
```

