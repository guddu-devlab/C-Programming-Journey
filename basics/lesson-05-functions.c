#include <stdio.h>

// Function to print a given number
void printNumber(int n) {
    // 'n' is a local variable to this function
    printf("%d\n", n);
}

int main() {

    // Calling the function multiple times with different values
    printNumber(3);
    printNumber(4);
    printNumber(10);

    return 0;
}
