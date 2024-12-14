#include <stdio.h>

int main(){
    int M, N, X, i, j, validade;
    printf("Informe o quantas linhas\n");
    scanf(" %d",&M);
    printf("Informe o quantas linhas\n");
    scanf(" %d",&N);
    int mat[M][N];
    printf("Informe os elementos do vetor\n");
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++){
            scanf(" %d",&mat[i][j]);
        }
    }
    printf("Informe o valor de X\n");
    scanf(" %d",&X);
    validade = 0;
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++){
            if ( X == mat[i][j]){
                validade = 1;
                break;
            }
        }
    }
    if (!validade){
        printf("-1");
    }else{
        printf("O valor %d foi encontrado na coordenada [%d,%d]",X,i,j);
    }
    return 0;
}