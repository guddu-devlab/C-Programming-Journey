#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;                   // stack memory
    int *p = malloc(sizeof(int)); // heap memory

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *p = 20;

    printf("Stack value: %d\n", x);
    printf("Heap value: %d\n", *p);

    free(p);  // prevent memory leak

    return 0;
}
