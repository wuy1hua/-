#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::string word;
    while (iss >> word) {
        if (word == ".")
            break;
        std::cout << word.length() << " ";
    }

    return 0;
}

