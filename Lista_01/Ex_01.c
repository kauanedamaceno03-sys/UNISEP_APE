

#include <stdio.h>

int main()
{
    int n1, n2;
    int resultado;
    
    printf("Digite o primeiro valor:");
    scanf("%i" , &n1);
    
    printf("Digite o segundo valor:");
    scanf("%i" , &n2);

    resultado = n1 % n2;
    
    if(resultado == 0){
        printf("O número %i é multiplo de %i" , n1, n2);
    }else{
        printf("O número %i não é múltiplo de %i" , n1, n2); 
    }

}