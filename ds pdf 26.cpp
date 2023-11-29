#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }

    unsigned long long result = 1;
    int i;
    for ( i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int input = 3;

    // Calculate and print the factorial of the input number
    printf("Output: %llu\n", factorial(input));

    return 0;
}
