#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {

    struct Student *s = malloc(sizeof(struct Student));

    if (s == NULL) {
        return 1;
    }

    s->id = 101;
    s->marks = 95.5;

    printf("ID: %d\n", s->id);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    s = NULL;

    return 0;
}
