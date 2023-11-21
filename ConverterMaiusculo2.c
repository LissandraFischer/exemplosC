#include <stdio.h>
#include <string.h>

void strupr(char *str) {
    while (*str) {
        // Verifica se o caractere é uma letra minúscula antes de converter
        if (*str >= 'a' && *str <= 'z') {
            // Converte para maiúscula subtraindo a diferença entre 'a' e 'A'
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Exemplo de strupr ";

    // Usa a função strupr para converter a cadeia para maiúsculas
    strupr(minhaString);

    // Imprime a cadeia de caracteres após a conversão para maiúsculas
    printf("Cadeia de caracteres em maiúsculas: %s\n", minhaString);

    return 0;
}
