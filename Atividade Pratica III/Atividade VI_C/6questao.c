#include <stdio.h>

int ocorre(int vetor[], int tamanho, int *numeroRepetido, int posicoes[]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                *numeroRepetido = vetor[i];
                int quantidade = 0;
                for (int k = 0; k < tamanho; k++) {
                    if (vetor[k] == *numeroRepetido) {
                        posicoes[quantidade] = k;
                        quantidade++;
                    }
                }
                return quantidade;
            }
        }
    }
    return 0;
}

int main() {
    int tamanho = 10,vetor[10],numeroRepetido=0,posicoes[10],quantidade=0;
    printf("Digite 10 números:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    quantidade = ocorre(vetor, tamanho, &numeroRepetido, posicoes);

    if (quantidade > 0) {
        printf("Número repetido: %d\n", numeroRepetido);
        printf("Posições: ");
        for (int i = 0; i < quantidade; i++) {
            printf("%d ", posicoes[i]);
        }
        printf("\n");
    } else {
        printf("Não há números repetidos no vetor.\n");
    }
    return 0;
}
