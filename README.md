# Example macOS universal app with cmake

This is a simple example that shows how to build a universal macOS (Intel & ARM/Apple Silicon) app using cmake. The essential part is the line `set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")` in the CMakeLists.txt file.