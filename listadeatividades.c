#include <stdio.h>
#include <math.h>

void menu() {
    printf("\n========================================= LISTA DE EXERCICIOS =========================================\n\n");

    printf(" 1. Leia tres numeros e imprima o maior.\n\n");

    printf(" 2. Leia tres numeros e imprima o menor.\n\n");

    printf(" 3. Leia tres numeros e imprima-os em ordem crescente.\n\n");

    printf(" 4. Leia um numero inteiro e imprima se ele e primo ou nao.\n");
    printf("    O programa questiona se deseja continuar ou sair (tecla 'S' para sair).\n\n");

    printf(" 5. Leia um numero inteiro, calcule seu fatorial e imprima o resultado.\n\n");

    printf(" 6. Leia o lado e altura de um retangulo, calcule e imprima o perimetro e a area.\n\n");

    printf(" 7. Receba uma idade e informe se a pessoa e:\n");
    printf("    Crianca (< 11 anos), Adolescente (< 18), Adulto (< 60) ou Idoso.\n\n");

    printf(" 8. Conversao cambial: leia um valor em Reais e imprima em Dolares.\n");
    printf("    Taxa: US$1,0 = R$2,25.\n\n");

    printf(" 9. Conversao cambial: leia um valor em Dolares e imprima em Reais.\n");
    printf("    Taxa: US$1,0 = R$2,25.\n\n");

    printf("10. Leia o raio (r) de uma circunferencia, calcule e imprima:\n");
    printf("    Area: A = PI * r^2  |  Comprimento: C = 2 * PI * r  (PI = 3,14).\n\n");

    printf("11. Leia dois numeros, troque seus valores usando uma terceira variavel auxiliar\n");
    printf("    e imprima os valores trocados.\n\n");

    printf("12. Leia dois numeros, troque seus valores SEM usar uma terceira variavel\n");
    printf("    e imprima os valores trocados.\n\n");

    printf("13. Leia tres notas de um aluno e calcule a media ponderada.\n");
    printf("    Pesos: nota1=2, nota2=3, nota3=5.\n\n");

    printf("14. Conte de 1 a 100 e, a cada multiplo de 10, imprima \"Multiplo de 10\".\n\n");

    printf("15. Chico tem 1,50m e cresce 2cm/ano. Ze tem 1,10m e cresce 3cm/ano.\n");
    printf("    Calcule e imprima quantos anos para Ze ser maior que Chico.\n\n");

    printf("16. Eleicao com 4 candidatos. Codigos: 1-4 = candidatos, 5 = nulo, 6 = branco.\n");
    printf("    Leia os votos e imprima totais e percentuais de cada opcao.\n\n");

    printf("17. Leia 20 valores de N e, para cada um, imprima a tabuada de 1 ate N:\n");
    printf("    1 * N = resultado ... N * N = resultado.\n\n");

    printf("18. Leia numeros inteiros positivos (0 para parar):\n");
    printf("    Par: imprima quantos divisores possui.\n");
    printf("    Impar < 10: calcule e imprima o fatorial.\n");
    printf("    Impar >= 10: calcule e imprima a soma de 1 ate N.\n\n");

    printf("19. Leia um inteiro positivo N e calcule: S = 1 + 1/2 + 1/3 + ... + 1/N.\n\n");

    printf("20. Calcule e imprima os 20 primeiros numeros primos positivos,\n");
    printf("    com excecao dos tres primeiros (1, 2 e 3).\n\n");

    printf(" 0. Sair\n");
    printf("========================================================================================================\n");
    printf("Escolha: ");
}

int main() {
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: {
                float a, b, c;
                printf("Digite tres numeros: ");
                scanf("%f %f %f", &a, &b, &c);
                float maior = a;
                if (b > maior) maior = b;
                if (c > maior) maior = c;
                printf("Maior: %.2f\n", maior);
                break;
            }

            case 2: {
                float a, b, c;
                printf("Digite tres numeros: ");
                scanf("%f %f %f", &a, &b, &c);
                float menor = a;
                if (b < menor) menor = b;
                if (c < menor) menor = c;
                printf("Menor: %.2f\n", menor);
                break;
            }

            case 3: {
                float a, b, c, tmp;
                printf("Digite tres numeros: ");
                scanf("%f %f %f", &a, &b, &c);
                if (a > b) { tmp = a; a = b; b = tmp; }
                if (a > c) { tmp = a; a = c; c = tmp; }
                if (b > c) { tmp = b; b = c; c = tmp; }
                printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
                break;
            }

            case 4: {
                int n;
                char resp = 'N';
                do {
                    printf("Digite um numero inteiro: ");
                    scanf("%d", &n);
                    int primo = (n > 1);
                    for (int i = 2; i <= (int)sqrt(n) && primo; i++)
                        if (n % i == 0) primo = 0;
                    printf("%d %s primo.\n", n, primo ? "e" : "nao e");
                    printf("Deseja continuar? (S para sair): ");
                    scanf(" %c", &resp);
                } while (resp != 'S' && resp != 's');
                break;
            }

            case 5: {
                int n;
                printf("Digite um numero inteiro: ");
                scanf("%d", &n);
                long long fat = 1;
                for (int i = 2; i <= n; i++) fat *= i;
                printf("Fatorial de %d = %lld\n", n, fat);
                break;
            }

            case 6: {
                float lado, altura;
                printf("Digite o lado e a altura do retangulo: ");
                scanf("%f %f", &lado, &altura);
                printf("Perimetro: %.2f\n", 2 * (lado + altura));
                printf("Area: %.2f\n", lado * altura);
                break;
            }

            case 7: {
                int idade;
                printf("Digite a idade: ");
                scanf("%d", &idade);
                if (idade < 11)       printf("Crianca\n");
                else if (idade < 18)  printf("Adolescente\n");
                else if (idade < 60)  printf("Adulto\n");
                else                  printf("Idoso\n");
                break;
            }

            case 8: {
                float reais;
                printf("Digite o valor em Reais: ");
                scanf("%f", &reais);
                printf("Em Dolares: US$ %.2f\n", reais / 2.25f);
                break;
            }

            case 9: {
                float dolares;
                printf("Digite o valor em Dolares: ");
                scanf("%f", &dolares);
                printf("Em Reais: R$ %.2f\n", dolares * 2.25f);
                break;
            }

            case 10: {
                float r;
                printf("Digite o raio: ");
                scanf("%f", &r);
                printf("Area: %.2f\n", 3.14f * r * r);
                printf("Comprimento: %.2f\n", 2 * 3.14f * r);
                break;
            }

            case 11: {
                float a, b, tmp;
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                tmp = a; a = b; b = tmp;
                printf("Valores trocados: %.2f %.2f\n", a, b);
                break;
            }

            case 12: {
                float a, b;
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                a = a + b;
                b = a - b;
                a = a - b;
                printf("Valores trocados: %.2f %.2f\n", a, b);
                break;
            }

            case 13: {
                float n1, n2, n3;
                printf("Digite as tres notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);
                printf("Media ponderada: %.2f\n", (n1*2 + n2*3 + n3*5) / 10.0f);
                break;
            }

            case 14: {
                for (int i = 1; i <= 100; i++)
                    if (i % 10 == 0) printf("%d - Multiplo de 10\n", i);
                break;
            }

            case 15: {
                float chico = 1.50f, ze = 1.10f;
                int anos = 0;
                while (ze <= chico) { chico += 0.02f; ze += 0.03f; anos++; }
                printf("Ze ultrapassa Chico em %d anos.\n", anos);
                break;
            }

            case 16: {
                int votos[7] = {0};
                int total = 0;
                int cod;
                printf("Digite os votos (0 para encerrar):\n");
                while (scanf("%d", &cod) == 1 && cod != 0) {
                    if (cod >= 1 && cod <= 6) { votos[cod]++; total++; }
                    else printf("Codigo invalido.\n");
                }
                printf("Total de votos: %d\n", total);
                for (int i = 1; i <= 4; i++)
                    printf("Candidato %d: %d votos (%.1f%%)\n", i, votos[i], total ? 100.0f*votos[i]/total : 0);
                printf("Nulos: %d (%.1f%%)\n", votos[5], total ? 100.0f*votos[5]/total : 0);
                printf("Brancos: %d (%.1f%%)\n", votos[6], total ? 100.0f*votos[6]/total : 0);
                break;
            }

            case 17: {
                int n;
                for (int q = 0; q < 20; q++) {
                    printf("Digite um numero para a tabuada: ");
                    scanf("%d", &n);
                    for (int i = 1; i <= n; i++)
                        printf("%d * %d = %d\n", i, n, i * n);
                }
                break;
            }

            case 18: {
                int n;
                printf("Digite numeros inteiros positivos (0 para parar):\n");
                while (scanf("%d", &n) == 1 && n > 0) {
                    if (n % 2 == 0) {
                        int div = 0;
                        for (int i = 1; i <= n; i++) if (n % i == 0) div++;
                        printf("%d e par e tem %d divisores.\n", n, div);
                    } else if (n < 10) {
                        long long fat = 1;
                        for (int i = 2; i <= n; i++) fat *= i;
                        printf("Fatorial de %d = %lld\n", n, fat);
                    } else {
                        long long soma = 0;
                        for (int i = 1; i <= n; i++) soma += i;
                        printf("Soma de 1 a %d = %lld\n", n, soma);
                    }
                }
                break;
            }

            case 19: {
                int n;
                printf("Digite o valor de n: ");
                scanf("%d", &n);
                double s = 0;
                for (int i = 1; i <= n; i++) s += 1.0 / i;
                printf("S = %.6f\n", s);
                break;
            }

            case 20: {
                int count = 0, num = 4;
                while (count < 20) {
                    int primo = 1;
                    for (int i = 2; i <= (int)sqrt(num) && primo; i++)
                        if (num % i == 0) primo = 0;
                    if (primo) { printf("%d ", num); count++; }
                    num++;
                }
                printf("\n");
                break;
            }

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

        if (opcao != 0 && opcao >= 1 && opcao <= 20) {
            printf("\nPressione Enter para voltar ao menu...");
            while (getchar() != '\n');
            getchar();
        }

    } while (opcao != 0);

    return 0;
}
