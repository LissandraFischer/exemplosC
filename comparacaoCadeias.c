#include <stdio.h>
#include <string.h>

int main() {
    // Cria duas cadeias de caracteres para comparar
    char str1[] = "hello";
    char str2[] = "world";

    // Usa strcmp para comparar as duas cadeias
    int resultado = strcmp(str1, str2);

    // Compara o resultado e imprime a mensagem apropriada
    if (resultado == 0) {
        printf("As cadeias são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira cadeia é menor que a segunda.\n");
    } else {
        printf("A primeira cadeia é maior que a segunda.\n");
    }

    return 0;
}
