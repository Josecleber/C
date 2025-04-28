#include <stdio.h>

int main() {
    int ddi;

    // Leitura do DDI
    printf("Digite o DDI: ");
    scanf("%d", &ddi);

    // Verificação do DDI e impressão do país correspondente
    switch (ddi) {
        case 1:
            printf("Estados Unidos\n");
            break;
        case 49:
            printf("Alemanha\n");
            break;
        case 54:
            printf("Argentina\n");
            break;
        case 55:
            printf("Brasil\n");
            break;
        case 35:
            printf("Portugal\n");
            break;
        default:
            printf("DDI não cadastrado.\n");
    }

    return 0;
}
