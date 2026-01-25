#include <stdio.h>

int main() {

    int score = 85;

    // Nested if-else: evaluate grade
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 75) {
        printf("Grade: B\n");
    } else if (score >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    // switch-case: print day of week
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other day\n");
    }

    // Early return example
    int x = 10;
    if (x < 0) {
        printf("Negative\n");
        return 0; // exit early
    }
    printf("x is non-negative\n");

    return 0;
}