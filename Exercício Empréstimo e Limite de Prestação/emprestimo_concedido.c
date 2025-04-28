#include <stdio.h>

int main() {
    float salario, valorEmprestimo, prestacao;
    int numPrestacoes;

    // Leitura do salário, valor do empréstimo e número de prestações
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor do empréstimo: ");
    scanf("%f", &valorEmprestimo);
    printf("Digite o número de prestações: ");
    scanf("%d", &numPrestacoes);

    // Verificação de valores negativos ou zero
    if (salario <= 0 || valorEmprestimo <= 0 || numPrestacoes <= 0) {
        printf("Os valores informados não podem ser zero ou negativos.\n");
        return 1;
    }

    // Cálculo do valor da prestação
    prestacao = valorEmprestimo / numPrestacoes;

    // Verificação se a prestação não ultrapassa 30% do salário
    if (prestacao <= salario * 0.30) {
        printf("Empréstimo pode ser concedido. Valor da prestação: %.2f\n", prestacao);
    } else {
        printf("Empréstimo NÃO pode ser concedido. Valor da prestação: %.2f\n", prestacao);
    }

    return 0;
}
