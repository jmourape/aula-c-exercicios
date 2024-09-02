//Contar o Número de Vogais em uma String
//Crie um programa que conte o número de vogais (a, e, i, o, u) em uma string fornecida pelo usuário.

#include <stdio.h>

int main() {
    char str[100];
    int i, qtde = 0;

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            qtde++;
        }
    }

    printf("Número de vogais na palavra é: %d\n", qtde);

    return 0;
}