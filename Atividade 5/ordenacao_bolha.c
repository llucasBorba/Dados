#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao_bolha.h"

void trocar(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void ordenacaoBolha(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}
