#include "lesson-14-math.h"

int operation_count = 0;

int add(int a, int b) {
    operation_count++;
    return a + b;
}
