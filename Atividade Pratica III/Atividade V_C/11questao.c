#include <stdio.h>

int main(){
    int i,j, m, somaDP=0, somaDS=0, multi=0;
    printf("Informe o tamanho da matriz quadratica\n");
    scanf(" %d",&m);
    int mat[m][m];
    printf("Informe os valores da matriz\n");
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            scanf(" %d",&mat[i][j]);
            if (i == j){
                somaDP = somaDP + mat[i][j];
            }
            if (i + j == m - 1){
                somaDS = somaDS + mat[i][j];
            }
        }
    }
    multi = somaDP * somaDS;
    printf("A multiplicacao da diagonal principal pela secundaria foi de %d\n", multi);
    return 0;
}