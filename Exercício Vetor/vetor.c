#include<stdio.h>

int main() {
    int vetor[5];
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
  
    i = 0;
    while (i < 5) {
        printf("%d\n", vetor[i]);
        i++;
    }

    return 0;
}
