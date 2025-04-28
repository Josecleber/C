#include <stdio.h>

int main() {
    int numero;

    // Leitura do número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificação se o número está entre 100 e 200
    if (numero >= 100 && numero <= 200) {
        printf("Você digitou um número entre 100 e 200.\n");
    } else {
        printf("Você digitou um número fora da faixa entre 100 e 200.\n");
    }

    return 0;
}
