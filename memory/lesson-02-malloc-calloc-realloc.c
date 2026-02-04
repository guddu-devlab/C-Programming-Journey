#include <stdio.h>
#include <stdlib.h>

int main() {

    int *a = malloc(3 * sizeof(int));
    int *b = calloc(3, sizeof(int));

    if (a == NULL || b == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    printf("malloc values:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);  // garbage values
    }

    printf("\ncalloc values:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", b[i]);  // initialized to 0
    }

    int *c = realloc(a, 5 * sizeof(int));
    if (c == NULL) {
        free(a);
        free(b);
        return 1;
    }

    a = c;

    printf("\nrealloc successful\n");

    free(a);
    free(b);

    return 0;
}
