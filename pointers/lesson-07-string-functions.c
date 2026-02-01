#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "Hello";
    char dest[10];

    // Safe copy (enough space)
    strcpy(dest, src);

    printf("Copied string: %s\n", dest);
    printf("Length: %zu\n", strlen(dest));

    return 0;
}
