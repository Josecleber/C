#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Leitura dos três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Ordenação e impressão dos números em ordem crescente
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Impressão dos números em ordem crescente
    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
