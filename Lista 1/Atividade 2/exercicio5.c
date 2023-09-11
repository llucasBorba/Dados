#include <stdio.h>

void multiplicarArrays(int array1[], int array2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] * array2[i];
    }
}

int main() {
    int array1[] = {2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4};
    int tamanho = sizeof(array1) / sizeof(array1[0]);

    int resultado[tamanho];

    multiplicarArrays(array1, array2, resultado, tamanho);

    printf("Resultado da multiplicação dos arrays:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}