#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao_bolha.h"

void trocar(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

