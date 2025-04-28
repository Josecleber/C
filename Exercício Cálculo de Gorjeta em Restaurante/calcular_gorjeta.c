#include <stdio.h>

int main() {
    float valorGasto, gorjeta, valorTotal;

    // Leitura do valor gasto no restaurante
    printf("Digite o valor gasto no restaurante: R$ ");
    scanf("%f", &valorGasto);

    // Cálculo da gorjeta (10% do valor gasto)
    gorjeta = valorGasto * 0.10;

    // Cálculo do valor total (valor gasto + gorjeta)
    valorTotal = valorGasto + gorjeta;

    // Exibição do valor total com a gorjeta
    printf("Valor gasto: R$ %.2f\n", valorGasto);
    printf("Gorjeta (10%%): R$ %.2f\n", gorjeta);
    printf("Valor total com gorjeta: R$ %.2f\n", valorTotal);

    return 0;
}
