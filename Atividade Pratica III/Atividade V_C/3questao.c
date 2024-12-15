#include <stdio.h>

int main(){
    int n, maior=0, menor=100;
    printf("Informe o tamanho do vetor\n");
    scanf(" %d",&n);
    int vet[n];
    printf("Informe os valore do vetor\n");
    for (int i = 0; i < n; i++){
        scanf(" %d",&vet[i]);
        if (vet[i] < menor){
            menor = vet[i];
        }
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("O maior numero foi de: %d.\n O menor numero foi: %d.",maior,menor);
    return 0;
}