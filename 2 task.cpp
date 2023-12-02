#include <iostream>
#include <iomanip>

const int N = 9;

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

int countElementsAboveThreshold(int matrix[N][N], int threshold) {
    int count = 0;
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            if (matrix[i][j] > threshold) {
                ++count;
            }
        }
    }
    return count;
}

int sumNegativeElements(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < 0) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int sumBelowMainDiagonal(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i > j) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int matrix[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = rand() % 20 - 10; // Для прикладу від -10 до 10
        }
    }

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(matrix);

    // 1
    int threshold = 5;
    std::cout << "\nTask 1: Кількість елементів вище" << threshold << ": "
              << countElementsAboveThreshold(matrix, threshold) << std::endl;

    // 2
    std::cout << "Task 2: Сума від\'ємних елементів: " << sumNegativeElements(matrix) << std::endl;

    // 3
    std::cout << "Task 3: Сума нижче головної діагоналі: " << sumBelowMainDiagonal(matrix) << std::endl;

    return 0;
}
