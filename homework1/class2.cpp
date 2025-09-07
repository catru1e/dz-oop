#include <iostream>

template <typename T, size_t N>
class FixedArray {
public:
    FixedArray(){}
    void set(int index, T value) {
        obj[index] = value;
    }
    T get(int index) {
        return obj[index];
    }
    size_t size() {
        return N;
    }

private:
    T obj[N];
};

int main() {
    FixedArray<char, 10> arr;
    arr.set(0, 'a');
    std::cout << arr.get(0) << std::endl;
    std::cout << arr.size() << std::endl;

    return 0;
}