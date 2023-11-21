#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[10] = "Exemplo";

    // Define todos os caracteres da cadeia para '*'
    memset(minhaString, 'e', sizeof(minhaString[0]));

    // Imprime a cadeia de caracteres após a modificação
    printf("Cadeia de caracteres após strset: %s\n", minhaString);

    return 0;
}
