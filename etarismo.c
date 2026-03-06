#include <stdio.h>

int main() {
    int idade, maioridade;
    maioridade = 18;
    printf("Informe a idade: ");
    scanf("%d", &idade);


    if (!(idade < 18 || idade >= 65)){
       printf("adulto");}
    
/*    
    if (idade >= 18 && idade < 65){
        printf("adulto");}
*/
    return 0;
}