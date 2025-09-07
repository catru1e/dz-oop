#include <iostream>
#include <string>

template <typename T>
void printElement (T a) {
    std::cout << a << std::endl;
}

int main() {
    int a = 10;
    printElement(a);
    double b = 10.1;
    printElement(b);
    std::string s = "hello";
    printElement(s);

    return 0;
}