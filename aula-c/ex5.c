#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Digite um nome: ");
    fgets(str, sizeof(str), stdin);

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}