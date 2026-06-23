#include <stdio.h>
#include <string.h>

int main() {
    char senha[20] = "1234";
    char entrada[20];

    do {
        printf("Digite a senha: ");
        scanf("%s", entrada);
    } while (strcmp(entrada, senha) != 0);

    printf("Senha correta!\n");

    return 0;
}   