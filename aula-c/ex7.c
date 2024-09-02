//Encontrar o Maior e o Menor Elemento de um Array
//Faça um programa que leia 10 números inteiros em um array e exiba o maior e o menor valor.

#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int maior, menor;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    maior = arr[0];
    menor = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
