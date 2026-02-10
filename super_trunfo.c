#include <stdio.h>

int main() {
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int pop1 = 214000000, pop2 = 46000000;
    float area1 = 8515767, area2 = 2780400;
    float pib1 = 1900, pib2 = 640;
    int pontos1 = 15, pontos2 = 10;
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    int opcao;

    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            if (pop1 > pop2)
                printf("%s venceu!\n", pais1);
            else if (pop2 > pop1)
                printf("%s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demográfica:\n");
            if (dens1 < dens2)
                printf("%s venceu!\n", pais1);
            else if (dens2 < dens1)
                printf("%s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}
