#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[10] = "Exemplo";

    // Define os primeiros três caracteres da cadeia para '#'
    memset(minhaString, '#', 3);

    // Imprime a cadeia de caracteres após a modificação
    printf("Cadeia de caracteres após strnset: %s\n", minhaString);

    return 0;
}
