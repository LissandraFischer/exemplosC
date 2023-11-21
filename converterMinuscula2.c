#include <stdio.h>
#include <string.h>

void strlwr_custom(char *str) {
    while (*str) {
        // Verifica se o caractere é uma letra maiúscula antes de converter
        if (*str >= 'A' && *str <= 'Z') {
            // Converte para minúscula adicionando a diferença entre 'A' e 'a'
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Exemplo de strlwr";

    // Usa a função strlwr_custom para converter a cadeia para minúsculas
    strlwr_custom(minhaString);

    // Imprime a cadeia de caracteres após a conversão para minúsculas
    printf("Cadeia de caracteres em minúsculas: %s\n", minhaString);

    return 0;
}
