#include <stdio.h>

int main() {

    int *p = NULL;

    // BUG 1: Dereferencing NULL pointer
    // Uncomment to see segmentation fault
    // *p = 10;

    int x = 5;
    p = &x;

    printf("Value: %d\n", *p);

    // BUG 2: Dangling pointer
    {
        int y = 20;
        p = &y;
    } // y goes out of scope here

    // p is now dangling
    printf("Dangling pointer value: %d\n", *p);

    return 0;
}
