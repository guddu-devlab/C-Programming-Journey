#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = malloc(sizeof(int));

    if (p == NULL) {
        return 1;
    }

    *p = 55;

    free(p);

    // free(p); // DOUBLE FREE — dangerous, commented intentionally

    p = NULL;

    return 0;
}
