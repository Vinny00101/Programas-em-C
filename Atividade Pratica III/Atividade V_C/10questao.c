#include <stdio.h>

int main(){
    int m, n1, p, n2;
    printf("Informe a linha da matriz A\n");
    scanf(" %d",&m);
    printf("Informe a coluna da matriz A\n");
    scanf(" %d",&n1);
    printf("Informe a linha da matriz B\n");
    scanf(" %d",&n2);
    printf("Informe a coluna da matriz B\n");
    scanf(" %d",&p);
    if (n1 == n2){
        int resultante[m][p], matA[m][n1], matB[n2][p];
        int i,j;
        printf("Informe os valore para a Matriz A\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n1; j++){
                scanf(" %d",&matA[i][j]);
            }
        }
        printf("Informe os valore para a Matriz B\n");
        for (i = 0; i < n2; i++){
            for (j = 0; j < p; j++){
                scanf(" %d",&matB[i][j]);
            }
        }
        printf("Matriz resultante\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < p; j++){
                resultante[i][j] = 0;
                for (int k = 0; k < n2; k++){
                    resultante[i][j] += matA[i][k] * matB[k][j];
                    printf(" %d,",resultante[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}