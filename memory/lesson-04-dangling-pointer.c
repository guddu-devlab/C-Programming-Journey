#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = malloc(sizeof(int));

    if (p == NULL) {
        return 1;
    }

    *p = 100;
    printf("Before free: %d\n", *p);

    free(p);

    // p is now dangling
    // printf("After free: %d\n", *p); // UNDEFINED BEHAVIOR

    p = NULL; // fix

    return 0;
}
