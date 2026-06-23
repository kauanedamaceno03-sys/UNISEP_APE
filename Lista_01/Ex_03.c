#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (op == '+')
        resultado = num1 + num2;
    else if (op == '-')
        resultado = num1 - num2;
    else if (op == '*')
        resultado = num1 * num2;
    else if (op == '/')
        resultado = num1 / num2;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}