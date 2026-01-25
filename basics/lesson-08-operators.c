#include <stdio.h>

int main() {

    // Arithmetic operators
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);   // 13
    printf("a - b = %d\n", a - b);   // 7
    printf("a * b = %d\n", a * b);   // 30
    printf("a / b = %d\n", a / b);   // 3, integer division
    printf("a %% b = %d\n", a % b);  // 1, remainder

    // Comparison operators
    printf("a == b: %d\n", a == b);  // 0 (false)
    printf("a != b: %d\n", a != b);  // 1 (true)
    printf("a > b: %d\n", a > b);    // 1 (true)

    // Logical operators
    int x = 1, y = 0;
    printf("x && y: %d\n", x && y);  // 0 (false)
    printf("x || y: %d\n", x || y);  // 1 (true)
    printf("!x: %d\n", !x);          // 0 (false)

    // Bitwise operators (low-level system importance)
    int p = 5;   // binary: 0101
    int q = 3;   // binary: 0011
    printf("p & q = %d\n", p & q);   // 1  (0101 & 0011 = 0001)
    printf("p | q = %d\n", p | q);   // 7  (0101 | 0011 = 0111)
    printf("p ^ q = %d\n", p ^ q);   // 6  (0101 ^ 0011 = 0110)
    printf("~p = %d\n", ~p);         // -6, bitwise NOT (two's complement)
    printf("p << 1 = %d\n", p << 1); // 10, left shift
    printf("p >> 1 = %d\n", p >> 1); // 2, right shift

    return 0;
}
