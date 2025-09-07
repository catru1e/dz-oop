#include <iostream>
template <typename T, size_t N, size_t M>
class Matrix {
public:
    void set(int row, int col, T value) {
        data[row][col] = value;
    }

    T get(int row, int col) {
        return data[row][col];
    }

    void print() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                std::cout << get(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }

    Matrix<T, N, M> operator+(Matrix<T, N, M> other) {
        Matrix<T, N, M> result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.set(i, j, get(i, j) + other.get(i, j));
            }
        }
        return result;
    }


private:
    T data[N][M] {};
};

int main() {
    Matrix<int, 4, 3> matrix;
    matrix.set(0, 1, 2);
    matrix.set(0, 0, 3);
    matrix.set(1, 2, 4);
    matrix.set(2, 3, 5);
    matrix.print();

    std::cout << std::endl;

    matrix = matrix + matrix;
    matrix.print();

    std::cout << std::endl;

    Matrix<char, 4, 3> matrix2;
    matrix2.set(0, 1, 'a');
    matrix2.set(0, 0, 'b');
    matrix2.set(1, 2, 'c');
    matrix2.set(2, 3, 'd');
    matrix2.print();

    std::cout << std::endl;

    Matrix<std::string, 2, 2> str;
    str.set(0, 0, "Hello");
    str.set(0, 1, "Have");
    str.set(1, 0, "good");
    str.set(1, 1, "Love you");

    Matrix<std::string, 2, 2> str2;
    str2.set(0, 0, " Shake.");
    str2.set(0, 1, " a");
    str2.set(1, 0, " day.");
    str2.set(1, 1, " <3>");

    auto result = str + str2;
    result.print();

    return 0;
}