#include <stdio.h>

float f(int c) {
    return (c * 9.0 / 5.0) + 32;
}

int main() {
    int c;

    scanf("%d", &c);

    printf("%.2f\n", f(c));

    return 0;
}   