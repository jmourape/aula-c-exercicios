//Converter Temperatura de Celsius para Fahrenheit
//Escreva um programa que converta uma temperatura fornecida pelo usuário de graus Celsius para Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}