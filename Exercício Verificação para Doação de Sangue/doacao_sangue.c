#include <stdio.h>

int main() {
    int idade;

    // Leitura da idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verificação de elegibilidade para doação de sangue
    if (idade >= 18 && idade <= 67) {
        printf("Você pode doar sangue.\n");
    } else {
        printf("Você não pode doar sangue.\n");
    }

    return 0;
}
