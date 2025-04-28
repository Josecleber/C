#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100];

    // Leitura dos nomes
    printf("Digite o nome da primeira pessoa: ");
    fgets(nome1, sizeof(nome1), stdin);
    printf("Digite o nome da segunda pessoa: ");
    fgets(nome2, sizeof(nome2), stdin);

    // Remover o caractere de nova linha que pode ser inserido pelo fgets
    if (nome1[strlen(nome1) - 1] == '\n') {
        nome1[strlen(nome1) - 1] = '\0';
    }
    if (nome2[strlen(nome2) - 1] == '\n') {
        nome2[strlen(nome2) - 1] = '\0';
    }

    // Comparar os nomes e imprimir em ordem alfabética
    if (strcmp(nome1, nome2) < 0) {
        printf("Ordem alfabética: %s, %s\n", nome1, nome2);
    } else {
        printf("Ordem alfabética: %s, %s\n", nome2, nome1);
    }

    return 0;
}
