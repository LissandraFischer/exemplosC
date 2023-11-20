#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres de origem
    char origem[] = "Exemplo de strncpy";

    // Declara uma cadeia de caracteres de destino com espaço suficiente
    char destino[20];

    // Usa strncpy para copiar os primeiros 10 caracteres da origem para o destino
    strncpy(destino, origem, 10);

    // Adiciona manualmente o caractere nulo terminador
    destino[10] = '\0';

    // Imprime a cadeia de destino
    printf("Cadeia de destino: %s\n", destino);

    return 0;
}
