#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int **matrix, int rows, int cols);
int **allocateMatrix(int rows, int cols);
void deallocateMatrix(int **matrix, int rows);
void displayMatrix(int **matrix, int rows, int cols);
void multiplyMatrices(int **matrixA, int **matrixB, int **resultMatrix, int rowsA, int colsA, int colsB);

int main() {
    const int rowsA = 2, colsA = 3;
    const int rowsB = 3, colsB = 2;

    int **matrixA = allocateMatrix(rowsA, colsA);
    int **matrixB = allocateMatrix(rowsB, colsB);
    int **resultMatrix = allocateMatrix(rowsA, colsB);

    printf("Enter data for matrix A (%dx%d):\n", rowsA, colsA);
    fillMatrix(matrixA, rowsA, colsA);
    printf("Enter data for matrix B (%dx%d):\n", rowsB, colsB);
    fillMatrix(matrixB, rowsB, colsB);

    multiplyMatrices(matrixA, matrixB, resultMatrix, rowsA, colsA, colsB);

    printf("Resultant matrix:\n");
    displayMatrix(resultMatrix, rowsA, colsB);

    deallocateMatrix(matrixA, rowsA);
    deallocateMatrix(matrixB, rowsB);
    deallocateMatrix(resultMatrix, rowsA);

    return 0;
}

void fillMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    if (matrix == NULL) {
        fprintf(stderr, "Memory allocation error, exiting.\n");
        exit(EXIT_FAILURE);
    }

    return matrix;
}

void deallocateMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void displayMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

void multiplyMatrices(int **matrixA, int **matrixB, int **resultMatrix, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
