#include <stdio.h>

int modaVet(int vet[10]){ 
    int maxContagem = 0, moda = 0; 
    for (int i = 0; i < 10; i++){ 
        int contagem = 0; 
        for (int j = 0; j < 10; j++){ 
            if (vet[j] == vet[i]){ 
                contagem++; 
            }
        } 
        if (contagem > maxContagem){ 
            maxContagem = contagem; 
            moda = vet[i]; 
        } 
    } return moda; 
}

float medianavet(int vet[10]){
    int medAna=0, valor = 0, i, j;
    for ( i = 0; i < 10; i++) {
        for ( j = i; j < 10; j++) {
            if (vet[i] > vet[j]) {
                valor = vet[j];
                vet[j] = vet[i];
                vet[i] = valor;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        if (i == 10/2 || i == 10/2 + 1){
            medAna = medAna + vet[i];
        }
    }
    medAna = medAna / 2;
    return medAna;
}

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
    printf("Informe os valores do vetor");
    for (int i = 0; i < 10; i++){
        scanf(" %d",&vet[i]);
    }
    float media = mediavet(vet);
    float mediana = medianavet(vet);
    int moda = modaVet(vet);
    printf("Média: %.2f\n", media); 
    printf("Mediana: %.2f\n", mediana); 
    printf("Moda: %d\n", moda);
    return 0;
}