#include <stdio.h>

int main() {

    int x = 10;

    int *p = NULL;   // safe initialization

    // p = &x;        // uncomment to make p valid

    if (p != NULL) {
        printf("Value pointed by p: %d\n", *p);
    } else {
        printf("p is NULL, not dereferencing\n");
    }

    p = &x;          // now p points to x

    printf("After assignment, *p = %d\n", *p);

    return 0;
}
