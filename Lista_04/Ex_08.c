#include <stdio.h>

float media(int v[], int t) {
    int i, soma = 0;

    for (i = 0; i < t; i++)
        soma += v[i];

    return (float)soma / t;
}

int main() {
    int v[5], i;

    for (i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    printf("%.2f\n", media(v, 5));

    return 0;
}