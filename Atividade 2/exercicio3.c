#include <stdio.h>
#include <string.h>

int busca_string(char *array[], int tamanho, char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1; /
        }
    }
    return 0; 
}

int main() {
    char *strings[] = {"texto", "J", "EDA"};
    int tamanho = sizeof(strings) / sizeof(strings[0]);
    char busca[] = "EDO";

    int resultado = busca_string(strings, tamanho, busca);
    
    printf("Saída: %d\n", resultado);

    return 0;
}