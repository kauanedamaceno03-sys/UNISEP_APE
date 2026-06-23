#include <stdio.h>

int main() {
    int v[5], i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}