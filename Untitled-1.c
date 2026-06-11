#include <stdio.h>

int main() {
    int n, i, flag = 0; // flag is used to track if a divisor is found

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle edge cases: 0 and 1 are not prime
    if (n <= 1) {
        flag = 1;
    } else {
        // Loop from 2 up to n-1
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                // If the remainder is 0, 'n' is divisible by 'i', so it's not prime
                flag = 1;
                break; // Exit the loop as soon as a divisor is found
            }
        }
    }

    if (flag == 0) {
        printf("%d is a **prime number**.\n", n);
    } else {
        printf("%d is **not a prime number**.\n", n);
    }

    return 0;
}