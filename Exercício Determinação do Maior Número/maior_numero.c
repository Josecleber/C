#include <stdio.h>

int main() {
    int num1, num2;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Comparação para determinar o maior número
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
