#include <stdio.h>

int main() {

    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("p points to: %p, value = %d\n", (void *)p, *p);

    p = p + 1;   // moves by sizeof(int)

    printf("After p+1: %p, value = %d\n", (void *)p, *p);

    p = p + 1;

    printf("After p+2: %p, value = %d\n", (void *)p, *p);

    return 0;
}
