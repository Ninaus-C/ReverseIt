#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 5;
    int y = 3;

    int sum = add(x, y);
    int diff = subtract(x, y);
    int prod = multiply(x, y);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);

    return 0;
}
