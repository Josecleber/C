#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    tamanho = strlen(palavra);

    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
