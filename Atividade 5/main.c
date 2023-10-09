#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s arquivo_de_entrada.txt\n", argv[0]);
        return 1;
    }
    char *nomeArquivoEntrada = argv[1];
    char nomeArquivoSaida[100];
    snprintf(nomeArquivoSaida, sizeof(nomeArquivoSaida), "%s_ordenado.txt", nomeArquivoEntrada);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        perror("Erro ao abrir arquivo de entrada");
        return 1;
    }

    int numPalavras = 0;
    char palavra[100];
    while (fscanf(arquivoEntrada, "%s", palavra) != EOF) {
        numPalavras++;
    }

    fseek(arquivoEntrada, 0, SEEK_SET);

    char **palavras = malloc(numPalavras * sizeof(char *));
    int i;
    for (i = 0; i < numPalavras; i++) {
        palavras[i] = malloc(100 * sizeof(char));
        fscanf(arquivoEntrada, "%s", palavras[i]);
    }

    fclose(arquivoEntrada);

    ordenacaoBolha(palavras, numPalavras);

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        perror("Erro ao criar arquivo de saída");
        return 1;
    }

    for (i = 0; i < numPalavras; i++) {
        fprintf(arquivoSaida, "%s\n", palavras[i]);
    }

    fclose(arquivoSaida);

    for (i = 0; i < numPalavras; i++) {
        free(palavras[i]);
    }
    free(palavras);

    printf("Palavras ordenadas e escritas em %s\n", nomeArquivoSaida);

    return 0;
}
