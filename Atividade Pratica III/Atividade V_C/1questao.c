#include <stdio.h>

int main(){
    int vet[10], i, soma=0, multi=0;
    float media=0;
    printf("Informe os valores para o vetor");
    for ( i = 0; i < 10; i++){
        scanf(" %d",vet[i]);
    }
    for ( i = 0; i < 10; i++){
        soma = soma + vet[i];
        multi = multi + vet[i];
    }
    media = soma / 10;
    printf("A soma: %d. A multiplicacao: %d. A media: %f",soma,multi,media);
    return 0;
}