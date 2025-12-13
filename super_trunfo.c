#include <stdio.h>

int main() {
    char estado;
    char codigo[4];
    char nome[50];
    long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    getchar();

    printf("Nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Populacao: ");
    scanf("%ld", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta da Cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
