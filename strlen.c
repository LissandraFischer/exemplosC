#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Lissandra";

    // Usa strlen para obter o comprimento da cadeia de caracteres
    size_t comprimento = strlen(minhaString);

    // Imprime o comprimento da cadeia de caracteres
    printf("O comprimento da cadeia de caracteres é: %zu\n", comprimento);

    return 0;
}
