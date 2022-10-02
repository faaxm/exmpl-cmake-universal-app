#include <curl/curl.h>
#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "CURL version is: " << curl_version() << std::endl;
    return 0;
}