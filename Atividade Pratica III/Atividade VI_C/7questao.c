#include <stdio.h>

void imprimirTabuada(int num) {
    printf("Tabuada de %d:\n", num);
    printf("\nAdição:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", num, i, num + i);
    }
    printf("\nSubtração:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d - %d = %d\n", num, i, num - i);
    }
    printf("\nMultiplicação:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    printf("\nDivisão:\n");
    for (int i = 1; i <= 10; i++) {
        if (i != 0) {
            printf("%d / %d = %.2f\n", num, i, (float)num / i);
        }
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    imprimirTabuada(numero);
    return 0;
}
