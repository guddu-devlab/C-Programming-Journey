#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("sizeof(arr) = %zu\n", sizeof(arr));
    printf("sizeof(p)   = %zu\n", sizeof(p));

    return 0;
}
