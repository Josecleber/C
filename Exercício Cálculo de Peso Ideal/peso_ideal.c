#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    int sexo;

    // Leitura da altura e sexo
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (1 para feminino, 2 para masculino): ");
    scanf("%d", &sexo);

    // Cálculo do peso ideal com base no sexo
    if (sexo == 1) {
        // Fórmula para mulheres
        pesoIdeal = (62.1 * altura) - 44.7;
    } else if (sexo == 2) {
        // Fórmula para homens
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        printf("Sexo inválido.\n");
        return 1;
    }

    // Exibindo o peso ideal
    printf("Peso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}
