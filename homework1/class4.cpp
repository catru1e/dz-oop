#include <iostream>

template <typename T>
class Range {
public:
    Range(T s, T e) : start(s), end(e) {
        if (end < start) std::swap(start, end);
    }
    bool contains(const T& value) {
        if (start <= value && value <= end) {
            return true;
        } else {
            return false;
        }
    }
    size_t length() const {
        return end - start;
    }
    void print() {
        std::cout << "["<< start << ", " << end << "]" << std::endl;
    }

private:
    T start;
    T end;
};

int main() {
    Range<int> rInt(3, 10);
    rInt.print();
    std::cout << "Does it contain 3? ";
    if (rInt.contains(3))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    std::cout << "Length: " << rInt.length() << std::endl;

    std::cout << std::endl;

    Range<double> rDouble(1.0, 2.0);
    rDouble.print();
    std::cout << "Length: " << rDouble.length() << std::endl;
    std::cout << "Does it contain 1.6? ";
    if (rDouble.contains(1.6))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    std::cout << std::endl;

    Range<char> rChar('a', 'z');
    rChar.print();
    std::cout << "Length: " << rChar.length() << std::endl;
    std::cout << "Does it contain 'f'? ";
    if (rChar.contains('f'))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}