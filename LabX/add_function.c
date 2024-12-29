#include <stdio.h>

void add(int a, int b, int c, int *result) {
    *result = a + b + c;
}

int main() {
    int result;
    add(1, 2, 3, &result);
    printf("The sum is: %d\n", result);
    return 0;
}
