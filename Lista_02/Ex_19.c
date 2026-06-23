#include <stdio.h>

int main() {
    int num, maior;

    printf("Digite um numero (999 para parar): ");
    scanf("%d", &num);

    maior = num;

    while (num != 999) {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &num);

        if (num != 999 && num > maior)
            maior = num;
    }

    printf("Maior numero digitado: %d\n", maior);

    return 0;
}   