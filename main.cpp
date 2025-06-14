#include <iostream>
#include <filesystem>

int main() {
    // Ask for directory from user
    char input[100];
    std::cout << "What directory would you like to scan for files from?" << std::endl;
    std::cin >> input;
    // loop through path
    for (const auto & file : std::filesystem::directory_iterator(input)) {
         std::cout << file.path() << std::endl;
    }
    return 0;
}