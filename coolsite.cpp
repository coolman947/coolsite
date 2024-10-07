#include <iostream>
#include <cstdlib> // for system()

int main() {
    // The URL to open
    const char* url = "https://coolman947.github.io/website-html/#";

    #ifdef _WIN32 // Windows
        system(("start " + std::string(url)).c_str());
    #elif __APPLE__ // macOS
        system(("open " + std::string(url)).c_str());
    #elif __linux__ // Linux
        system(("xdg-open " + std::string(url)).c_str());
    #else
        std::cerr << "Unsupported OS!" << std::endl;
        return 1;
    #endif

    return 0;
}

