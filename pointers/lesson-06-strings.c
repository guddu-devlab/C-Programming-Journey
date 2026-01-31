#include <stdio.h>

int main() {

    char str1[] = "Hello";      // stored as H e l l o \0
    char *str2 = "World";      // string literal (read-only memory)

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    printf("Length of str1 = %zu\n", sizeof(str1));
    printf("Length of str2 pointer = %zu\n", sizeof(str2));

    return 0;
}
