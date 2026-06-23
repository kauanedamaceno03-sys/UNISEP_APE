#include <stdio.h>

int main() {
    int v[6], i, maior, segundo;

    for (i = 0; i < 6; i++)
        scanf("%d", &v[i]);

    maior = segundo = -999999;

    for (i = 0; i < 6; i++) {
        if (v[i] > maior) {
            segundo = maior;
            maior = v[i];
        } else if (v[i] > segundo && v[i] != maior) {
            segundo = v[i];
        }
    }

    printf("Segundo maior: %d\n", segundo);

    return 0;
}
