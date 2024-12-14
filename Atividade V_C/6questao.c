#include <stdio.h>

int main(){
    int N, i, j, valor;
    printf("Informe o tamanho do vetor\n");
    scanf(" %d",&N);
    int vet[N];
    printf("Informe os elementos do vetor\n");
    for ( i = 0; i < N; i++){
        scanf(" %d",&vet[i]);
    }
    valor = 0;
    for ( i = 0; i < N; i++) {
        for ( j = i; j < N; j++) {
            if (vet[i] > vet[j]) {
                valor = vet[j];
                vet[j] = vet[i];
                vet[i] = valor;
            }
        }
    }
    for ( i = 0; i < N; i++){
        printf(" %d ",vet[i]);
    }
    return 0;
}