#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int num_elements = argc - 1;
    int *array = (int *)malloc(num_elements * sizeof(int));

    if (array == NULL) {
        printf("Erro ao alocar memória para o array.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    bubble_sort(array, num_elements);

    printf("Saída: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}