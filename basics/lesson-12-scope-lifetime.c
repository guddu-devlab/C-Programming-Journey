#include <stdio.h>

// Global variable (exists for entire program)
int global_count = 0;

void increment() {
    int local = 1;          // local variable: scope = function, lifetime = function call
    global_count += local;
}

int main() {

    increment();
    increment();

    printf("Global count = %d\n", global_count);

    return 0;
}

