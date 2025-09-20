// Check if the number is prime or not 

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not a prime number\n");
            return 0;
        }
    }

    printf("Prime number\n");
    return 0;
}

// To compile the program, use the following command:
// gcc Prime_Number_Or_Not.c -o prime

// To run the compiled program, use the following command:
// ./prime