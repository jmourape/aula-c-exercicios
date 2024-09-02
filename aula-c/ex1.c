// 1. Verificar se um Número é Par ou Ímpar
// Escreva um programa que solicite ao usuário um número e verifique se ele é par ou ímpar.

#include <stdio.h>

int main() {
    printf("Insira um numero: \n");
    int numero;
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("%d é par\n", numero);
    } else {
        printf("%d é impar\n", numero);
    }

    return 0;
}
