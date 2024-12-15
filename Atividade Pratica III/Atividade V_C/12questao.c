#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho da matriz (N x N): ");
    scanf("%d", &N);
    int mat[N][N], mat_rotacionada[N][N];
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat_rotacionada[j][N-1-i] = mat[i][j];
        }
    }
    printf("Matriz rotacionada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat_rotacionada[i][j]);
        }
        printf("\n");
    }
    return 0;
}
