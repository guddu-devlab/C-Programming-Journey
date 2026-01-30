#include <stdio.h>

int main() {

    int arr[3] = {10, 20, 30};
    int *p = arr;   // array decays to pointer to first element

    printf("arr[0] = %d\n", arr[0]);
    printf("*p = %d\n", *p);

    printf("arr = %p\n", (void *)arr);
    printf("&arr[0] = %p\n", (void *)&arr[0]);
    printf("p = %p\n", (void *)p);

    printf("sizeof(arr) = %zu\n", sizeof(arr));
    printf("sizeof(p) = %zu\n", sizeof(p));

    return 0;
}
