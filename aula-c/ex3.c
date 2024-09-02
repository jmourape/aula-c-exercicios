#include <stdio.h>

int main() {
    int N;
    int i;
    
    printf("Digite um número: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d não é primo.\n", N);
    } else {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                printf("%d não é primo.\n", N);
                return 0;
            }
        }
        printf("%d é primo.\n", N);
    }

    return 0;
}
