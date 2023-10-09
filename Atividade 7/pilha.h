#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha Pilha;

Pilha* criarPilha(int capacidade);
void empilhar(Pilha* pilha, int valor);
int desempilhar(Pilha* pilha);
int tamanhoPilha(Pilha* pilha);
void destruirPilha(Pilha* pilha);

#endif
