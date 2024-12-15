#include <stdio.h>

float mediavet(int vet[10]){
    float media=0;
    for (int i = 0; i < 10; i++){
        media = media + vet[i];
    }
    media = media / 10;
    return media;
}

int main(){
    int vet[10];
    float media=0;
    printf("Informe os valores do vetor");
    for (int i = 0; i < 10; i++){
        scanf(" %d",&vet[i]);
    }
    media = mediavet(vet);
    printf("A media dos elementos do vetor: %2.f", media);
    return 0;
}