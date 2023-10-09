#include <stdlib.h>
#include "fila.h"

struct Fila {
    int* array;
    int frente;
    int tras;
    int capacidade;
};

Fila* criarFila(int capacidade) {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->array = (int*)malloc(capacidade * sizeof(int));
    fila->frente = 0;
    fila->tras = -1;
    fila->capacidade = capacidade;
    return fila;
}

void enfileirar(Fila* fila, int valor) {
    fila->array[++fila->tras] = valor;
}

int desenfileirar(Fila* fila) {
    return fila->array[fila->frente++];
}

int tamanhoFila(Fila* fila) {
    return fila->tras - fila->frente + 1;
}

void destruirFila(Fila* fila) {
    free(fila->array);
    free(fila);
}
