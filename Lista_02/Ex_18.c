#include <stdio.h>

int main() {
    int idade, soma = 0, cont = 0;
    float media;

    while (1) {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        soma += idade;
        cont++;
    }

    if (cont > 0) {
        media = (float)soma / cont;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade digitada\n");
    }

    return 0;
}