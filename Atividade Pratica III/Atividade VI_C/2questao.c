#include <stdio.h>
#define PI 3.14

float calculaArea(float raio){
    return PI * (raio * raio);
}

int main(){
    float raio;
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    float area = calcularArea(raio); 
    printf("A área do círculo com raio %.2f é: %.2f\n", raio, area);
    return 0;
}