#include <stdio.h>
#include <stdlib.h>

double calcular_media(int vetor[], int quantidade) {
    double soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += vetor[i];
    }
    return soma / quantidade;
}

void preencher_nota_alunos(int vetor[], int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        printf("Informe o valor da nota %d o aluno: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void exibir_resultados(double media) {
    printf("media = %.2f\n", media);
}

int main() {
    int quantidade;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    int nota_alunos[quantidade];

    preencher_nota_alunos(nota_alunos, quantidade);
    
    double media_final = calcular_media(nota_alunos, quantidade);
    
    exibir_resultados(media_final);

    return 0;
}