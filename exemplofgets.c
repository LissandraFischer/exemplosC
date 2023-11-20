#include <stdio.h>

int main() {
    char nome[50];

    // fgets é mais seguro do que gets
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove a quebra de linha no final, se existir
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }

    // Imprime a entrada do usuário
    printf("Seu nome é: %s\n", nome);

    return 0;
}
