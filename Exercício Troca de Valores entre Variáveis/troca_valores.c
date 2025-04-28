#include <stdio.h>

int main() {
    int A, B, temp;

    // Leitura dos valores para as variáveis A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Troca dos valores usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Apresentação dos valores trocados
    printf("Valor de A após a troca: %d\n", A);
    printf("Valor de B após a troca: %d\n", B);

    return 0;
}
