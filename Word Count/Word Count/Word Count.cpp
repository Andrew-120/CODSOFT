#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string fileName;
    std::cout << "Enter the file name: ";
    std::cin >> fileName;

    std::ifstream file(fileName);

    if (!file) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    std::string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();

    std::cout << "Total word count: " << wordCount << std::endl;

    return 0;
}
