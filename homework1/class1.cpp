#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}
    void print() {
        std::cout << first << " " << second << std::endl;
    }

    T1 getFirst() {
        return first;
    }
    T2 getSecond() {
        return second;
    }

private:
    T1 first;
    T2 second;
};

int main() {
    Pair p(5, "five");
    p.print();
    std::cout << "first: " << p.getFirst() << std::endl;
    std::cout << "second: " << p.getSecond() << std::endl;

    return 0;
}