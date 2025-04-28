#include <stdio.h>

int main() {
    float valorBase, valorFinal;

    // Leitura do valor base da mercadoria
    printf("Digite o valor base da mercadoria: R$ ");
    scanf("%f", &valorBase);

    // Verificação e cálculo do valor final
    if (valorBase < 50) {
        valorFinal = valorBase + (valorBase * 0.20);  // 20% de acréscimo
    } else {
        valorFinal = valorBase + (valorBase * 0.30);  // 30% de acréscimo
    }

    // Exibindo os resultados
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
