#include <stdio.h>

int main() {
    int numero;

    // Leitura do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificação se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}
