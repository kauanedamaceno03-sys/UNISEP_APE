#include <stdio.h>

int quadrado(int n) {
    return n * n;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", quadrado(n));

    return 0;
}