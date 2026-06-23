#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a < b) {
        for (i = a + 1; i < b; i++) {
            printf("%d\n", i);
        }
    } else {
        for (i = b + 1; i < a; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}