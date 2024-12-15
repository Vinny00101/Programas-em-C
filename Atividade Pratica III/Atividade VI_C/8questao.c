#include <stdio.h>

int somaNum(int num, int num2){
    return num + num2;
}

float divisaoNum(int num, int num2){
    return num / num2;
}

int multiNum(int num, int num2){
    return num * num2;
}

int subtracaoNum(int num, int num2){
    if (num > num2){
        return num - num2;
    }else{
        return num2 - num;
    }
}

int main(){
    int num, num2;
    char operacao;
    printf("informe os valores de numero 1 e 2");
    scanf(" %d",&num);
    scanf(" %d",&num2);
    printf("informe a operacao");
    scanf(" %s",operacao);
    switch (operacao){
    case '+':
        printf("Soma:",somaNum(num,num2));
        break;
    case '/':
        printf("Divisao:",divisaoNum(num,num2));
        break;
    case '*':
        printf("Multiplicacao:",multiNum(num,num2));
        break;
    case '-':
        printf("Subtracao:",subtracaoNum(num,num2));
        break;
    default:
        printf("ERRO");
        break;
    }

}