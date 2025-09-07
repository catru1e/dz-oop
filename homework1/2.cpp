#include <iostream>
#include <string>

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 6, b = 8;
    std::cout << "before swap: " << a << " and " << b << std::endl;
    mySwap(a, b);
    std::cout << "after swap: " << a << " and " << b << std::endl;

    double c = 6.6, d = 8.8;
    std::cout << "before swap: " << c << " and " << d << std::endl;
    mySwap(c, d);
    std::cout << "after swap: " << c << " and " << d << std::endl;

    std::string e = "six", f = "eight";
    std::cout << "before swap: " << e << " and " << f << std::endl;
    mySwap(e, f);
    std::cout << "after swap: " << e << " and " << f << std::endl;

    return 0;
}