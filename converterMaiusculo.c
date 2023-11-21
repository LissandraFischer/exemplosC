#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Exemplo de toupper";

    // Obtém o comprimento da cadeia
    size_t comprimento = strlen(minhaString);

    // Converte cada caractere para maiúscula usando toupper
    for (size_t i = 0; i < comprimento; i++) {
        minhaString[i] = toupper(minhaString[i]);
    }

    // Imprime a cadeia de caracteres após a conversão para maiúsculas
    printf("Cadeia de caracteres em maiúsculas: %s\n", minhaString);

    return 0;
}
