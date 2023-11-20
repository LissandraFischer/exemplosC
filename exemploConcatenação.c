#include <stdio.h>
#include <string.h>

int main() {
    // Cria uma cadeia de caracteres de origem
    char destino[50] = "Olá, ";

    // Cria outra cadeia de caracteres para concatenar
    char complemento[] = "mundo!";

    // Usa strcat para concatenar o complemento à cadeia de destino
    strcat(destino, complemento);

    // Imprime a cadeia de destino
    printf("Cadeia de destino: %s\n", destino);

    return 0;
}
