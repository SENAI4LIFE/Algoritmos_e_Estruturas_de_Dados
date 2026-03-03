#include <stdio.h>

int main() {
    int numero1, numero2, soma;
    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o valor do segundo numero: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    printf("A soma dos numeros é: %d\n", soma);

    if (soma % 2 ==0)
        printf("par");
    else 
        printf("impar");
    return 0;

}
