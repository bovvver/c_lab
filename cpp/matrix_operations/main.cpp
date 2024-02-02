#include <iostream>

int **allocateMatrix(int, int);
void deallocateMatrix(int**, int);
void displayMatrix(int**, int, int);
void multiplyMatrices(int**, int**, int**, int, int, int);
void fillMatrix(int**, int, int);

int main() {
    const int rowsA = 2, colsA = 3;
    const int rowsB = 3, colsB = 2;

    int** matrixA = allocateMatrix(rowsA, colsA);
    int** matrixB = allocateMatrix(rowsB, colsB);
    int** resultMatrix = allocateMatrix(rowsA, colsB);

    std::cout << "Enter data for matrix A (" << rowsA << "x" << colsA << "):\n";
    fillMatrix(matrixA, rowsA, colsA);
    std::cout << "Enter data for matrix B (" << rowsB << "x" << colsB << "):\n";
    fillMatrix(matrixB, rowsB, colsB);

    multiplyMatrices(matrixA, matrixB, resultMatrix, rowsA, colsA, colsB);

    std::cout << "Resultant matrix:\n";
    displayMatrix(resultMatrix, rowsA, colsB);

    deallocateMatrix(matrixA, rowsA);
    deallocateMatrix(matrixB, rowsB);
    deallocateMatrix(resultMatrix, rowsA);

    return 0;
}

void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

int** allocateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    if (matrix == nullptr) {
        std::cerr << "Memory allocation error, exiting" << std::endl;
        exit(EXIT_FAILURE);
    }

    return matrix;
}

void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void displayMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplyMatrices(int** matrixA, int** matrixB, int** resultMatrix, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
