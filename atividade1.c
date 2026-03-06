#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Informe o primeiro numero:");
    scanf("%d", &num1);
    printf("Informe o segundo numero:");
    scanf("%d", &num2);
    printf("Informe o terceiro numero:");
    scanf("%d", &num3);

   if (num1 >= num2 && num1 >= num3) {
      printf("o maior numero e o primeiro: %d", num1);
   } else if (num2 >= num1 && num2 >= num3) {
      printf("o maior numero e o segundo: %d", num2);
   } else {
      printf("o maior numero e o terceiro: %d", num3);
   }
   
    return 0;
}