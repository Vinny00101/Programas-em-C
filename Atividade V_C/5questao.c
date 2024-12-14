#include <stdio.h>

int main() {
    int N, i, j;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    int vet[N], vetP[N];
    int tamanhoP = 0;
    printf("Informe os elementos do vetor:\n");
    for ( i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }
    for ( i = 0; i < N; i++) {
        int duplicado = 0;
        for ( j = 0; j < tamanhoP; j++) {
            if (vet[i] == vetP[j]) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            vetP[tamanhoP++] = vet[i];
        }
    }
    printf("Vetor P sem valores duplicados:\n");
    for ( i = 0; i < tamanhoP; i++) {
        printf("%d ", vetP[i]);
    }
    return 0;
}
