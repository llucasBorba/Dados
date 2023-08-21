#include <stdio.h>

int contarOcorrencias(int array[], int tamanho, int busca) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == busca) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[] = {2, 5, 2, 8, 2, 10, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 2;

    int ocorrencias = contarOcorrencias(numeros, tamanho, busca);
    
    printf("O número %d aparece %d vezes no array.\n", busca, ocorrencias);

    return 0;
}