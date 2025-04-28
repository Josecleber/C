#include <stdio.h>

int main() {
    int n;
    int diagonais;

    // Leitura do número de lados do polígono
    printf("Digite o número de lados do polígono: ");
    scanf("%d", &n);

    // Verificação se o número de lados é válido
    if (n < 3) {
        printf("Um polígono deve ter no mínimo 3 lados.\n");
        return 1;
    }

    // Cálculo do número de diagonais
    diagonais = n * (n - 3) / 2;

    // Exibição do número de diagonais
    printf("Número de diagonais diferentes: %d\n", diagonais);

    return 0;
}
