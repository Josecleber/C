#include <stdio.h>

int main() {
    int numero;

    // Leitura do número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificação se o número é positivo, negativo ou nulo
    if (numero > 0) {
        printf("O número %d é POSITIVO.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é NEGATIVO.\n", numero);
    } else {
        printf("O número é NULO.\n");
    }

    return 0;
}
