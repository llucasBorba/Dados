#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Se for divisível por algum número, não é primo
        }
    }
    
    return 1; // Se não for divisível por nenhum número, é primo
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("O número é primo (1)\n");
    } else {
        printf("O número não é primo (0)\n");
    }

    return 0;
}