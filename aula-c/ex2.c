//Calcular a Soma de Números de 1 a N
//Crie um programa que solicite ao usuário um número N e calcule a soma de todos os números de 1 a N.

#include <stdio.h>
int main(){
    int n;
    int i;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++){
        soma += i;
    }

    printf("A soma de 1 a %d e: %d\n", n, soma);

    return 0;
}
