#include <stdio.h>

int main(){
    int n, m, i ,j, soma1=0, soma2=0;
    printf("Informe o tamanho do vetor 1\n");
    scanf(" %d",&n);
    printf("Informe o tamanho do vetor 2\n");
    scanf(" %d",&m);
    int vet[n], vet2[m];
    if (n == m){
        printf("Mesmo tamanho\n");
    }else{
        printf("Nao e o mesmo tamanho\n");
    }
    printf("Informe os valores do vetor 1\n");
    for ( i = 0; i < n; i++){
        scanf(" %d",&vet[i]);
        soma1 = soma1 + vet[i];
    }
    printf("Informe os valores do vetor 2\n");
    for ( i = 0; i < m; i++){
        scanf(" %d",&vet2[i]);
        soma2 = soma2 + vet2[i];
    }
    
    for ( i = 0; i < n; i++){
        for ( j = 0; j < m; j++){
            if (vet[i] == vet2[j]){
                printf("O numero %d do vetor 1 tambem aparece no vetor dois\n",vet[i]);
            }
        }
    }
    printf("A soma do vetor 1 foi [ %d ] e do vetor dois [ %d ]\n",soma1,soma2);
    if (soma1 == soma2){
        printf("A soma dos elementos dos dois vetores sao iguais.\n");
    }else{
        printf("A soma dos elementos do vetor 1 nao e igual soma do vetor dois\n");
    }
    
    return 0;
}