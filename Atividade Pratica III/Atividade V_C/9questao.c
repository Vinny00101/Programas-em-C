#include <stdio.h>

int main(){
    int m, n,i,j;
    printf("Informe o tamanho da primeira matriz\n");
    scanf(" %d",&m);
    printf("Informe o tamanho da segunda matriz\n");
    scanf(" %d",&n);
    int mat1[m][m], mat2[n][n], mat[m][m];
    printf("Informe os valores para a primeira matriz\n");
    for (i = 0; i < m; i++){
        for ( j = 0; j < m; j++){
            scanf(" %d",&mat1[i][j]);
        } 
    }
    printf("Informe os valores para a segunda matriz\n");
    for (i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf(" %d",&mat2[i][j]);
        }
    }
    printf("A matriz resultante:\n");
    for (i = 0; i < m; i++){
        for ( j = 0; j < m; j++){
           mat[i][j] = mat1[i][j] + mat2[i][j];
           printf(" %d,",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}