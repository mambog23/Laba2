#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "z2.h"
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void task2() {
    std::ifstream inputFile("z2.txt");
    std::string word;

    while (inputFile >> word) {
        if (isVowel(word[0])) {
            std::cout << (char)toupper(word[0]) << word.substr(1) << " ";
        }
        else {
            std::cout << word << " ";
        }
    }

    inputFile.close();
}