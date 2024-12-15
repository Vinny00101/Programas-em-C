#include <stdio.h>
#include <math.h>

float calcularMedia(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

float calcularVariancia(int vetor[], int tamanho) {
    float media = calcularMedia(vetor, tamanho);
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += pow(vetor[i] - media, 2);
    }
    return soma / tamanho;
}

float calcularDesvioPadrao(int vetor[], int tamanho) {
    float variancia = calcularVariancia(vetor, tamanho);
    return sqrt(variancia);
}

int main() {
    int vetor[5];
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    float variancia = calcularVariancia(vetor, 5);
    float desvioPadrao = calcularDesvioPadrao(vetor, 5);

    printf("Variância: %.2f\n", variancia);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

    return 0;
}