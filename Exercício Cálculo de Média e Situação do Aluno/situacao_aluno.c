#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Leitura das quatro notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Cálculo da média aritmética
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Verificação da situação do aluno
    if (media >= 7) {
        printf("Aluno APROVADO. Média: %.2f\n", media);
    } else if (media >= 5 && media < 7) {
        printf("Aluno DE EXAME FINAL. Média: %.2f\n", media);
    } else {
        printf("Aluno REPROVADO. Média: %.2f\n", media);
    }

    return 0;
}
