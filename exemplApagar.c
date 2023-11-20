#include <stdio.h>
#include <string.h>

void apagarCaracteres(char *cadeia, const char *caracteresAApagar) {
    int i, j;
    int tamanhoCadeia = strlen(cadeia);
    int tamanhoAApagar = strlen(caracteresAApagar);

    // Itera sobre cada caractere na cadeia
    for (i = 0; i < tamanhoCadeia; i++) {
        // Verifica se o caractere atual não está na lista de caracteres a apagar
        int deveManter = 1;
        for (j = 0; j < tamanhoAApagar; j++) {
            if (cadeia[i] == caracteresAApagar[j]) {
                deveManter = 0;
                break;
            }
        }

        // Se o caractere não estiver na lista, mantém na cadeia
        if (deveManter) {
            printf("%c", cadeia[i]);
        }
    }
}

int main() {
    char cadeiaOriginal[100];  // Tamanho arbitrário para a cadeia de caracteres
    char caracteresAApagar[20];  // Tamanho arbitrário para a lista de caracteres a apagar
    
    // Solicita ao usuário que insira a cadeia original e a lista de caracteres a apagar
    printf("Digite a cadeia original: ");
    fgets(cadeiaOriginal, sizeof(cadeiaOriginal), stdin);

    printf("Digite os caracteres a apagar: ");
    fgets(caracteresAApagar, sizeof(caracteresAApagar), stdin);

    // Remove a quebra de linha do final das entradas
    cadeiaOriginal[strcspn(cadeiaOriginal, "\n")] = '\0';
    caracteresAApagar[strcspn(caracteresAApagar, "\n")] = '\0';

    // Imprime a cadeia original e a nova cadeia após a remoção dos caracteres especificados
    printf("Cadeia original: %s\n", cadeiaOriginal);
    printf("Nova cadeia: ");
    apagarCaracteres(cadeiaOriginal, caracteresAApagar);

    return 0;
}