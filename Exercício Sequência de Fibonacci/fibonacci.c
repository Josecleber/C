#include<stdio.h>

int main() {
    int ultimo = 1;
    int anterior = 0;
    int numero;

    printf("Digite o número do termo a ser mostrado na sequência de Fibonacci: ");
    scanf("%d", &numero);

    printf("%d %d ", anterior, ultimo);

    int contador = 0;

    while (contador < numero) {
        int proximo = anterior + ultimo;
        printf("%d ", proximo);
        anterior = ultimo;
        ultimo = proximo;
        contador++;
    }

    return 0;
}
