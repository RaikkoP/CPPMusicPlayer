#include <iostream>
#include <vector>
#include <filesystem>


// Loop through files and find all the audio files
int loopThroughPath(const char* input) {
    for (const auto & file : std::filesystem::directory_iterator(input)) {
        std::cout << file.path() << std::endl;
    }
    return 0;
}

int main() {
    char input[100];
    std::cout << "What directory would you like to scan for files from?" << std::endl;
    std::cin >> input;
    loopThroughPath(input);
    return 0;
}
