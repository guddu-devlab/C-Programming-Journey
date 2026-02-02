#include <stdio.h>

size_t my_strlen(const char *str) {
    size_t len = 0;

    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}

int main() {

    char text[] = "Systems Programming";

    printf("Length: %zu\n", my_strlen(text));

    return 0;
}
