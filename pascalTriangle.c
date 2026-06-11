#include <stdio.h>

/**
 * Generates and prints Pascal's Triangle up to 'rows' lines.
 *
 * Pascal's Triangle is based on binomial coefficients: C(n, k)
 * where n is the row number and k is the element position.
 * The value of C(n, k) can be efficiently calculated using the
 * formula: C(n, k) = C(n, k-1) * (n - k + 1) / k.
 *
 * We initialize the first element of every row C(i, 0) to 1,
 * and then iterate to calculate the rest of the elements.
 */
int main() {
    int rows, i, j;
    long long C = 1; // C will store the current binomial coefficient, using long long for larger numbers

    // --- 1. Get user input ---
    printf("Enter the number of rows for Pascal's Triangle: ");
    // Check if the input operation was successful
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > 15) {
        printf("Invalid input. Please enter a positive integer (up to 15 for better formatting).\n");
        return 1; // Return error code
    }

    printf("\n--- Pascal's Triangle with %d Rows ---\n\n", rows);

    // --- 2. Outer loop for rows (i) ---
    for (i = 0; i < rows; i++) {

        // --- 3. Inner loop for spacing (to center the triangle) ---
        // 'rows - i' determines the amount of leading space needed.
        for (j = 0; j < (rows - i - 1); j++) {
            printf("   "); // Print more spaces for wider numbers
        }

        C = 1; // The first element of every row (C(i, 0)) is always 1

        // --- 4. Inner loop for elements (j) in the current row ---
        for (j = 0; j <= i; j++) {
            
            // Print the current coefficient value
            printf("%6lld", C);

            // Calculate the next coefficient C(i, j+1) using the previous C(i, j)
            // This calculation is skipped on the last iteration (when j == i)
            if (j < i) {
                // Formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
                // Here: C = C * (i - j) / (j + 1)
                C = C * (i - j) / (j + 1);
            }
        }

        // --- 5. Newline after each row is complete ---
        printf("\n");
    }

    return 0; // Successful execution
}
