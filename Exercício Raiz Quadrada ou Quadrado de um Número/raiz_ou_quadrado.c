#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    // Leitura do número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verificação e cálculo
    if (numero >= 0) {
        printf("Raiz quadrada do número: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado do número: %.2f\n", numero * numero);
    }

    return 0;
}
