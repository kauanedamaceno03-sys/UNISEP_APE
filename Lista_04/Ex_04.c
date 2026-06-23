#include <stdio.h>

int maior(int a, int b, int c) {
    int m = a;

    if (b > m)
        m = b;
    if (c > m)
        m = c;

    return m;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", maior(a, b, c));

    return 0;
}