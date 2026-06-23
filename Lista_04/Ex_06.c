#include <stdio.h>

int fat(int n) {
    int i, r = 1;

    for (i = 1; i <= n; i++)
        r = r * i;

    return r;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", fat(n));

    return 0;
}   