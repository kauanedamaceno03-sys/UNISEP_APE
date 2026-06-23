#include <stdio.h>

int main() {
    int i, conte = 0;

    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            conte++;
        }
    }

    printf("Quantidade de numeros pares entre 1 e 50: %d\n",);

    return 0;
}   