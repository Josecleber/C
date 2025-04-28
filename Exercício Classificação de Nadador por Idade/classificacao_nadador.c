#include <stdio.h>

int main() {
    int idade;

    // Leitura da idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // Classificação do nadador
    if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else if (idade >= 14) {
        printf("Categoria: Juvenil\n");
    } else if (idade >= 9) {
        printf("Categoria: Infantil\n");
    } else {
        printf("Categoria: Mirim\n");
    }

    return 0;
}
