#include <stdio.h>

int main() {
    int idade, maioridade;
    maioridade = 18;
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade >= maioridade )
        printf("Maior de idade");
    else 
        printf("Menor de idade");
    return 0;
}
