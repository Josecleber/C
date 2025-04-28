#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100], fraseSemEspacos[100];
    int i, j = 0, tamanho, palindromo = 1;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            fraseSemEspacos[j] = tolower(frase[i]);
            j++;
        }
    }
    fraseSemEspacos[j] = '\0'; 

    tamanho = strlen(fraseSemEspacos);

    for (i = 0; i < tamanho / 2; i++) {
        if (fraseSemEspacos[i] != fraseSemEspacos[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("A frase é um palíndromo.\n");
    else
        printf("A frase não é um palíndromo.\n");

    return 0;
}
