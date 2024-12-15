#include <string.h>
#include <stdio.h>

int somalinha(int matris[3][3]){
    int linha1, linha2, linha3;
    char linhas[20];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 0){
                linha1 = linha1 + matris[i][j];
            }else if(i == 1){
                linha2 = linha2 + matris[i][j];
            }else{
                linha3 = linha3 + matris[i][j];
            }
        }
        
    }
    sprintf(linhas, "Linha 1 %d, Linha 2 %d, Linha 3 %d",linha1,linha2,linha3);
    return linhas;
}

int somacoluna(int matris[3][3]){
    char colunas[20];
    int coluna1,coluna2,coluna3;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 1){
                coluna1 = coluna1 + matris[i][j];
            }
            else if (i == 2){
                coluna2 = coluna2 + matris[i][j];
            }
            else{
                coluna3 = coluna3 + matris[i][j];

            }
            
        }
        
    }
    sprintf(colunas, "Coluna 1 %d, Coluna 2 %d, Coluna 3 %d",coluna1,coluna2,coluna3);
    return colunas;
}

int somaD(int matris[3][3]){
    int soma;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(i == j){
                soma = matris[i][j];
            }
        }
    }
    return soma;
}


int main(){
    int matris[3][3];
    printf("Informe os valores da matriz!\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf(" %d",&matris[i][j]);
            
        }
    }
    printf(" %d \n", somaD(matris));
    printf(" %s \n",somacoluna(matris));
    printf(" %s \n",somalinha(matris));
    return 0;
}