#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "AMAR";

    // Encontra a última ocorrência da letra 'A'
    char *resultado = strrchr(minhaString, 'A');

    // Verifica se o caractere foi encontrado
    if (resultado != NULL) {
        printf("A última ocorrência do caractere 'A' foi encontrada na posição: %ld\n", resultado - minhaString);
    } else {
        printf("O caractere 'A' não foi encontrado na cadeia de caracteres.\n");
    }

    return 0;
}
