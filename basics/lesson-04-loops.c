#include <stdio.h>

int main() {

    // Using a 'for' loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // Using a 'while' loop to print numbers from 5 to 1
    int j = 5;
    while (j >= 1) {
        printf("%d ", j);
        j--;   // decrement to avoid infinite loop
    }

    return 0;
}
