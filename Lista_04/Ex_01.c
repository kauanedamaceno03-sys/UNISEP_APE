#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", soma(x, y));

    return 0;
}   