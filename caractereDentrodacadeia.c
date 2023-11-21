#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "AMAR";

    // Encontra a primeira ocorrência da letra 'm'
    char *resultado = strchr(minhaString, 'A');

    // Verifica se o caractere foi encontrado
    if (resultado != NULL) {
        printf("O caractere 'A' foi encontrado na posição: %ld\n", resultado - minhaString);
    } else {
        printf("O caractere 'A' não foi encontrado na cadeia de caracteres.\n");
    }

    return 0;
}
