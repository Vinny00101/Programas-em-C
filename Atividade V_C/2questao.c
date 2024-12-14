#include <stdio.h>

int main(){
    int m, n, i, j, k;
    printf("Informe o tamanho do vetor 1\n");
    scanf(" %d",&m);
    printf("Informe o tamanho do vetor 2\n");
    scanf(" %d",&n);
    int vet1[m], vet2[n];
    for ( i = 0; i < m; i++){
        scanf(" %d",&vet1[i]);
    }
    for ( i = 0; i < m; i++){
        scanf(" %d",&vet2[i]);
    }
    int novoVet[m+n];
    i = 0, j = 0, k = 0; 
    while (i < m && j < n){ 
        novoVet[k++] = vet1[i++]; 
        novoVet[k++] = vet2[j++];
    } 
    while (i < m){ 
        novoVet[k++] = vet1[i++]; 
    }
    while (j < n){
        novoVet[k++] = vet2[j++]; 
    }
    printf("Vetor P intercalado:\n"); 
    for (int i = 0; i < m + n; i++){ 
        printf("%d,", novoVet[i]); 
    }
    return 0;
}