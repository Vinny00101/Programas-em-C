#include <stdio.h>

int potencia(int num, int expoente){
    int resultando=1;
    for (int i = 1; i <= expoente; i++){
        resultando = resultando * num;
    }
    return resultando;
}

int main(){
    int num, expoente, resultado=0;
    printf("Informe o valor da base");
    scanf(" %d",&num);
    printf("Informe o valor do expoente");
    scanf(" %d",&expoente);
    resultado = potencia(num,expoente);
    printf("O resultado foi de %d",resultado);
    return 0;
}