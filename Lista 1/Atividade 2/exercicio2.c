#include <stdio.h>

void encontrarMinMax(int array[], int tamanho, int *menor, int *maior) {
    if (tamanho <= 0) {
        *menor = *maior = 0;
        return;
    }

    *menor = *maior = array[0];  

    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int numeros[] = {10, 5, 8, 20, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int menor, maior;
    encontrarMinMax(numeros, tamanho, &menor, &maior);

    printf("O menor elemento do array é: %d\n", menor);
    printf("O maior elemento do array é: %d\n", maior);

    return 0;
}