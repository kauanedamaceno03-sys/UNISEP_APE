#include <stdio.h>

int main() {
    int v[10], i, j, cont, maiorCont = 0, maisFrequente = v[0];

    for (i = 0; i < 10; i++)
        scanf("%d", &v[i]);

    for (i = 0; i < 10; i++) {
        cont = 0;

        for (j = 0; j < 10; j++) {
            if (v[i] == v[j])
                cont++;
        }

        if (cont > maiorCont) {
            maiorCont = cont;
            maisFrequente = v[i];
        }
    }

    printf("Mais frequente: %d\n", maisFrequente);

    return 0;
}