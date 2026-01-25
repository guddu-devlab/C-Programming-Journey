#include <stdio.h>

int main() {

    // Integer variable: usually 4 bytes on 32/64-bit systems
    int a = 10;

    // Character variable: stores a single ASCII character, 1 byte
    char c = 'A';

    // Floating-point variable: stores decimal numbers, 4 bytes
    float f = 3.14;

    // Double-precision float: more precision, 8 bytes
    double d = 3.14159;

    // Print value and size of each variable
    // %zu is used because sizeof() returns size_t (portable and safe)
    printf("int a = %d, size = %zu bytes\n", a, sizeof(a));
    printf("char c = %c, size = %zu bytes\n", c, sizeof(c));
    printf("float f = %.2f, size = %zu bytes\n", f, sizeof(f));
    printf("double d = %.5lf, size = %zu bytes\n", d, sizeof(d));

    return 0;  // indicates successful program termination
}