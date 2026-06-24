
#include <string.h>

void inverter(char vet[]) {
    int i = 0;
    int j = strlen(vet) - 1;
    char temp;

    while (i < j) {
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;

        i++;
        j--;
    }
}