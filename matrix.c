#include <stdio.h>
#include <stdlib.h>

// Fixed size for 3x3 matrix
#define SIZE 3

void read_matrix(int matrix[SIZE][SIZE], const char* name) {
    printf("\n--- Input %s (3x3) ---\n", name);
    printf("Enter elements:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Exiting.\n");
                exit(1);
            }
        }
    }
}

void display_matrix(int matrix[SIZE][SIZE], const char* name) {
    printf("\n--- %s (3 x 3) ---\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d", matrix[i][j]); 
        }
        printf("\n");
    }
}

void add_matrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int result[SIZE][SIZE]) {
    printf("\n--- Addition Result ---\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    display_matrix(result, "Sum");
}

void multiply_matrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int result[SIZE][SIZE]) {
    printf("\n--- Multiplication Result ---\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    display_matrix(result, "Product");
}

void transpose_matrix(int m[SIZE][SIZE], int t[SIZE][SIZE]) {
    printf("\n--- Transpose Result ---\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            t[j][i] = m[i][j];
        }
    }
    display_matrix(t, "Transposed");
}

int main() {
    int choice;
    int m1[SIZE][SIZE], m2[SIZE][SIZE], result[SIZE][SIZE], t[SIZE][SIZE];

    do {
        printf("\n== 3x3 Matrix Operations ==\n");
        printf("1. Add\n");
        printf("2. Multiply\n");
        printf("3. Transpose\n");
        printf("4. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            choice = 0; 
            continue;
        }

        switch (choice) {
            case 1:
                read_matrix(m1, "M1 (Add)");
                read_matrix(m2, "M2 (Add)");
                
                display_matrix(m1, "Input Matrix 1");
                display_matrix(m2, "Input Matrix 2");
                
                add_matrices(m1, m2, result);
                break;

            case 2:
                read_matrix(m1, "M1 (Multiply)");
                read_matrix(m2, "M2 (Multiply)");
                
                display_matrix(m1, "Input Matrix 1");
                display_matrix(m2, "Input Matrix 2");
                
                multiply_matrices(m1, m2, result);
                break;

            case 3:
                read_matrix(m1, "M1 (Transpose)");
                
                display_matrix(m1, "Input Matrix");
                
                transpose_matrix(m1, t);
                break;

            case 4:
                printf("Exiting.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
