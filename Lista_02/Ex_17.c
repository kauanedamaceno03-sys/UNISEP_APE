#include <stdio.h>

int main() {
    int num, cont = 0;

    while (1) {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &num);

        if (num < 0)
            break;

        cont++;
    }

    printf("Quantidade de numeros digitados: %d\n", cont);

    return 0;
}