#include <stdio.h>

// Adds two numbers and returns the result
int add(int a, int b) {
    int result = a + b;   // local variable, exists only in this function
    return result;        // value copied back to caller
}

int main() {

    int x = 5;
    int y = 7;

    int sum = add(x, y);  // function call creates a new stack frame

    printf("Sum = %d\n", sum);

    return 0;
}
