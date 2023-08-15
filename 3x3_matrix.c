#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix;
    int i, j;

    // Allocate memory for the matrix
    matrix = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
        matrix[i] = (int *)malloc(3 * sizeof(int));

    // Fill the matrix with values
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            matrix[i][j] = i * 3 + j + 1;

    // Print the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // Free the memory
    for (i = 0; i < 3; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}
