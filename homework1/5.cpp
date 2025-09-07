#include <iostream>
#include <vector>

template <typename T>
int linearSearch(std::vector<T> vec, T obj) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == obj) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vecInt = {1, 2, 3, 4, 5, 6};
    int indexInt = linearSearch(vecInt, 4);
    std::cout << indexInt << std::endl;

    std::vector<double> vecDouble = {1.1, 2.2, 3.3, 4.4};
    int indexDouble = linearSearch(vecDouble, 3.3);
    std::cout << indexDouble << std::endl;

    std::vector<std::string> vecString = {"apple", "banana", "cherry", "banana"};
    int indexString = linearSearch(vecString, std::string("banana"));
    std::cout << indexString << std::endl;

    return 0;
}