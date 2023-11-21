#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        // Troca os caracteres no início e no final
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Move os índices para o próximo par de caracteres
        inicio++;
        fim--;
    }
}

int main() {
    // Cria uma cadeia de caracteres
    char minhaString[] = "Exemplo";

    // Usa a função strrev para inverter a cadeia de caracteres
    strrev(minhaString);

    // Imprime a cadeia de caracteres após a inversão
    printf("Cadeia de caracteres após strrev: %s\n", minhaString);

    return 0;
}
