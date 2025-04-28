#include <stdio.h>

int main() {
    int a, b, c;

    // Leitura dos três lados do triângulo
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &a);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d", &c);

    // Verificação se os lados formam um triângulo válido
    if (a + b > c && b + c > a && c + a > b) {
        // Classificação segundo os ângulos

        if (a == b && b == c) {
            printf("O triângulo é Equilátero.\n");
        } else if (a == b || b == c || c == a) {
            printf("O triângulo é Isósceles.\n");
        } else {
            printf("O triângulo é Escaleno.\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo válido.\n");
    }

    return 0;
}
