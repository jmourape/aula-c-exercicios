//Ordenar um Array de Números em Ordem Crescente
//Implemente um algoritmo de ordenação (como Bubble Sort)
//para ordenar um array de números inteiros em ordem crescente.

#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
