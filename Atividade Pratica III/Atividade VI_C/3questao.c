#include <stdio.h>

const char* primo(int numero){
    if (numero <= 1){
        return "O numero nao e primo";
    }
    for (int i = 2; i * i <= numero; i++){
        if (numero % i == 0){
            return "O numero nao e primo";
        }
    }
    return "numero primo";
}

int main(){
    int numero;
    printf("Informe o numero\n");
    scanf(" %d",&numero);
    printf(primo(numero));
    return 0;
}