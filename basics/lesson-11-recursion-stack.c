#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {

    // Base case: stops recursion
    if (n == 1) {
        return 1;
    }

    // Recursive call
    return n * factorial(n - 1);
}

int main() {

    int num = 4;

    int result = factorial(num);

    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
