#include <stdlib.h>
#include "pilha.h"

struct Pilha {
    int* array;
    int topo;
    int capacidade;
};

Pilha* criarPilha(int capacidade) {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->array = (int*)malloc(capacidade * sizeof(int));
    pilha->topo = -1;
    pilha->capacidade = capacidade;
    return pilha;
}

void empilhar(Pilha* pilha, int valor) {
    pilha->array[++pilha->topo] = valor;
}

int desempilhar(Pilha* pilha) {
    return pilha->array[pilha->topo--];
}

int tamanhoPilha(Pilha* pilha) {
    return pilha->topo + 1;
}

void destruirPilha(Pilha* pilha) {
    free(pilha->array);
    free(pilha);
}
