#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 10; i++) {
        soma = soma + i;
    }

    printf("Soma de 1 a 10: %d\n", soma);

    return 0;
}