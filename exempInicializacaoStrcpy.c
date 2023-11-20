#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres de origem
    char origem[] = "Hoje é segunda";

    // Declara uma cadeia de caracteres de destino com tamanho suficiente
    char destino[20];

    // Usa strcpy para copiar a cadeia de origem para a cadeia de destino
    strcpy(destino, origem);

    // Imprime a cadeia de destino
    printf("Cadeia de destino: %s\n", destino);

    return 0;
}
