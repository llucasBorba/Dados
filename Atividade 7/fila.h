#ifndef FILA_H
#define FILA_H

typedef struct Fila Fila;

Fila* criarFila(int capacidade);
void enfileirar(Fila* fila, int valor);
int desenfileirar(Fila* fila);
int tamanhoFila(Fila* fila);
void destruirFila(Fila* fila);

#endif
