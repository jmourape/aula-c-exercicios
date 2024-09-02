//Imprimir a Tabela de Multiplicação
//Faça um programa que solicite ao usuário um número e imprima a tabela de multiplicação desse número até 10.

#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Digite um número: \n");
    scanf("%d", &N);

    printf("Tabuada do %d!\n\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;

}