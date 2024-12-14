#include <stdio.h>

int main(){
    int mat[2][2], i, j, det=0;
    printf("Informe os valores da Matriz 2 por 2");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            scanf(" %d",&mat[i][j]);
            if (i == 1 && j == 1){
                det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
                printf("O determinante foi de %d",det);
            }
        }
    }
    return 0;
}
