#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    Pilha* pilha = criarPilha(5);
    Fila* fila = criarFila(5);

    // Usando a pilha
    empilhar(pilha, 1);
    empilhar(pilha, 2);
    empilhar(pilha, 3);
    printf("Elemento desempilhado: %d\n", desempilhar(pilha));

    // Usando a fila
    enfileirar(fila, 10);
    enfileirar(fila, 20);
    enfileirar(fila, 30);
    printf("Elemento desenfileirado: %d\n", desenfileirar(fila));

    destruirPilha(pilha);
    destruirFila(fila);

    return 0;
}
