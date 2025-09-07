#include <iostream>
template <typename T>
T summArray(T* obj, size_t size) {
    T sum = obj[0];
    for (size_t i = 1; i < size; i++) {
        sum += obj[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    summArray<int>(intArray, 5);
    std::cout << summArray(intArray, 5) << std::endl;

    double dArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    summArray(dArray, 5);
    std::cout << summArray(dArray, 5) << std::endl;

    std::string sArray[] = {"hello", " ", "world"};
    summArray<std::string>(sArray, 3);
    // size_t size = sizeof(sArray) / sizeof(sArray[0]);

    std::cout << summArray(sArray, 3) << std::endl;

    return 0;
}