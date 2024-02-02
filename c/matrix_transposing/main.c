#include <stdio.h>

void matrixTranspose(int rows, int columns, int matrix[rows][columns]) {
    int transposed[columns][rows];

    printf("Matrix after transposition:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the elements of the matrix (%d x %d):\n", rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Array before transposition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    matrixTranspose(rows, columns, matrix);

    return 0;
}
