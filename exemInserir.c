#include <stdio.h>
#include <string.h>

void inserirCaracteres(char *cadeia, const char *caracteresAInserir) {
    int i, j;
    int tamanhoCadeia = strlen(cadeia);
    int tamanhoAInserir = strlen(caracteresAInserir);

    // Cria uma nova cadeia para armazenar os caracteres inseridos
    char novaCadeia[2 * tamanhoCadeia + tamanhoAInserir + 1];

    // Copia os caracteres da cadeia original para a nova cadeia
    strcpy(novaCadeia, cadeia);

    // Itera sobre cada caractere a inserir
    for (i = 0; i < tamanhoAInserir; i++) {
        int jaExiste = 0;

        // Verifica se o caractere a ser inserido já existe na cadeia
        for (j = 0; j < tamanhoCadeia; j++) {
            if (caracteresAInserir[i] == cadeia[j]) {
                jaExiste = 1;
                break;
            }
        }

        // Se o caractere não existe, insere na nova cadeia
        if (!jaExiste) {
            strcat(novaCadeia, &caracteresAInserir[i]);
        }
    }

    // Imprime a nova cadeia após a inserção dos caracteres
    printf("Nova cadeia: %s\n", novaCadeia);
}

int main() {
    char cadeiaOriginal[100];  // Tamanho arbitrário para a cadeia de caracteres
    char caracteresAInserir[20];  // Tamanho arbitrário para a lista de caracteres a inserir
    
    // Solicita ao usuário que insira a cadeia original e a lista de caracteres a inserir
    printf("Digite a cadeia original: ");
    fgets(cadeiaOriginal, sizeof(cadeiaOriginal), stdin);

    printf("Digite os caracteres a inserir: ");
    fgets(caracteresAInserir, sizeof(caracteresAInserir), stdin);

    // Remove a quebra de linha do final das entradas
    cadeiaOriginal[strcspn(cadeiaOriginal, "\n")] = '\0';
    caracteresAInserir[strcspn(caracteresAInserir, "\n")] = '\0';

    // Imprime a cadeia original
    printf("Cadeia original: %s\n", cadeiaOriginal);

    // Chama a função para inserir os caracteres e imprime o resultado
    inserirCaracteres(cadeiaOriginal, caracteresAInserir);

    return 0;
}
