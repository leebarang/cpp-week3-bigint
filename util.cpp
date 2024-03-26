#include <iostream>
#include <string>

// a와 b를 바꾼다
void swap(std::string *a, std::string *b) {

    std::string temp = *a;
    *a = *b;
    *b = temp;

    return;
}