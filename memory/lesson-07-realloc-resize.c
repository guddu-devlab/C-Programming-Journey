#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 3;

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Resize to hold 6 elements
    int new_size = 6;
    int *temp = realloc(arr, new_size * sizeof(int));

    if (temp == NULL) {
        free(arr);
        return 1;
    }

    arr = temp;

    for (int i = n; i < new_size; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}
