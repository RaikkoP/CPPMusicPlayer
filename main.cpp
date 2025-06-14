#include <iostream>
#include <vector>
#include <filesystem>
#include <string>


// Loop through files and find all the audio files

//TODO: Might want to find a system that doesn't do this with string but with actual file types
int loopThroughPath(std::string input) {
    for (const auto & file : std::filesystem::directory_iterator(input)) {
        std::string converted = (std::string)file.path();
        unsigned size = converted.size();
        converted.erase(converted.begin(), converted.end() - 4);
        if(converted == ".cpp") {
            std::cout << converted << std::endl;
        }
    }
    return 0;
}

int main() {
    std::string input;
    std::cout << "What directory would you like to scan for files from?" << std::endl;
    std::cin >> input;
    loopThroughPath(input);
    return 0;
}
