#include <stdio.h>

int main() {
    int lA, cA, lB, cB;

    printf("Matriz A - linhas: "); scanf("%d", &lA);
    printf("Matriz A - colunas: "); scanf("%d", &cA);
    printf("Matriz B - linhas: "); scanf("%d", &lB);
    printf("Matriz B - colunas: "); scanf("%d", &cB);

    if (cA != lB) { printf("Multiplicacao impossivel!\n"); return 1; }

    double A[lA][cA], B[lB][cB], C[lA][cB];

    printf("Preencha A (%dx%d):\n", lA, cA);
    for (int i = 0; i < lA; i++)
        for (int j = 0; j < cA; j++) {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%lf", &A[i][j]);
        }

    printf("Preencha B (%dx%d):\n", lB, cB);
    for (int i = 0; i < lB; i++)
        for (int j = 0; j < cB; j++) {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%lf", &B[i][j]);
        }

    for (int i = 0; i < lA; i++)
        for (int j = 0; j < cB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("\nMatriz Produto (%dx%d):\n\n", lA, cB);
    for (int i = 0; i < lA; i++) {
        for (int j = 0; j < cB; j++)
            printf(j == 0 ? "_%.0f_" : "|%.0f_", C[i][j]);
        printf("\n");
    }

    return 0;
}