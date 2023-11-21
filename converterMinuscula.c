#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Exemplo de tolower";

    // Obtém o comprimento da cadeia
    size_t comprimento = strlen(minhaString);

    // Converte cada caractere para minúscula usando tolower
    for (size_t i = 0; i < comprimento; i++) {
        minhaString[i] = tolower(minhaString[i]);
    }

    // Imprime a cadeia de caracteres após a conversão para minúsculas
    printf("Cadeia de caracteres em minúsculas: %s\n", minhaString);

    return 0;
}
