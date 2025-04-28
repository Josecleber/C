#include <stdio.h>

int main() {
    int idade;

    // Leitura da idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verificação da idade
    if (idade >= 65) {
        printf("A pessoa é maior de 65 anos.\n");
    } else if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}
