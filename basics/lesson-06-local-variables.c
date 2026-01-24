#include <stdio.h>

// Function that modifies its local copy of the variable
void showNumber(int n) {
    n = n + 5;              // modifies local variable 'n'
    printf("%d ", n);       // prints modified value
}

int main() {

    int x = 3;              // local variable of main

    showNumber(x);          // value of x is passed to the function
    printf("%d\n", x);      // x in main remains unchanged

    return 0;
}
