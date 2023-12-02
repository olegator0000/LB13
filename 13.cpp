#include <iostream>
#include <iomanip>

const int N = 9; 
const int M = 3; 
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void splitMatrix(int matrix[N][N]) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            int rowStart = i * 3;
            int colStart = j * 3;
            std::cout << "Square " << i * M + j + 1 << ":" << std::endl;
            for (int r = rowStart; r < rowStart + 3; ++r) {
                for (int c = colStart; c < colStart + 3; ++c) {
                    std::cout << std::setw(4) << matrix[r][c];
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    int matrix[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = rand() % 10; // Для прикладу
        }
    }

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(matrix);

    std::cout << "\nSplit Matrix:" << std::endl;
    splitMatrix(matrix);

    return 0;
}
