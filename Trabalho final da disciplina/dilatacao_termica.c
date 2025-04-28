#include <stdio.h>

// Função para calcular a dilatação térmica
double calcularDilatacao(double comprimentoInicial, double coeficiente, double variacaoTemperatura) {
    return comprimentoInicial * coeficiente * variacaoTemperatura;
}

int main() {
    int n, i;
    double variacaoTemperatura;
    
    // Solicita o número de materiais
    printf("Digite o numero de materiais: ");
    scanf("%d", &n);
    
    // Verifica se o número de materiais é válido
    if (n <= 0) {
        printf("Numero de materiais invalido.\n");
        return 1;
    }
    
    // Declara vetores para armazenar os dados dos materiais
    double comprimentoInicial[n], coeficiente[n], dilatacao[n];
    
    // Solicita a variação de temperatura
    printf("Digite a variacao de temperatura (em graus Celsius): ");
    scanf("%lf", &variacaoTemperatura);
    
    // Verifica se a variação de temperatura é válida
    if (variacaoTemperatura <= 0) {
        printf("Variacao de temperatura invalida.\n");
        return 1;
    }
    
    // Lê os dados dos materiais
    printf("Digite o comprimento inicial e o coeficiente de dilatacao dos materiais:\n");
    for (i = 0; i < n; i++) {
        printf("Material %d\n", i + 1);
        printf("Comprimento inicial (em metros): ");
        scanf("%lf", &comprimentoInicial[i]);
        printf("Coeficiente de dilatacao (em 1/°C): ");
        scanf("%lf", &coeficiente[i]);
        
        // Calcula a dilatação de cada material
        dilatacao[i] = calcularDilatacao(comprimentoInicial[i], coeficiente[i], variacaoTemperatura);
    }
    
    // Imprime os resultados
    printf("\nDilatacao dos Materiais:\n");
    for (i = 0; i < n; i++) {
        printf("Material %d: Dilatacao = %.6lf metros\n", i + 1, dilatacao[i]);
    }
    return 0;
}
