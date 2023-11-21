#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres de origem
    char destino[50] = "Olá, ";

    // Cria outra cadeia de caracteres para concatenar
    char complemento[] = "mundo!";

    // Usa strncat para concatenar até 5 caracteres do complemento à cadeia de destino
    strncat(destino, complemento, 5);

    // Imprime a cadeia de destino
    printf("Cadeia de destino: %s\n", destino);

    return 0;
}
