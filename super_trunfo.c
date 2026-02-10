#include <stdio.h>

int main() {
    char estado1[3] = "SP";
    char codigo1[5] = "ABPQ";
    char nome1[50] = "Sao Paulo";
    long int populacao1 = 110000;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2[3] = "PE";
    char codigo2[5] = "AQMW";
    char nome2[50] = "Recife";
    long int populacao2 = 20000;
    float area2;
    float pib2;
    int pontosTuristicos2;

    if (populacao1 > populacao2) {
    printf("%s venceu! População: %ld\n", nome1, populacao1);
    } else if (populacao1 < populacao2) {
    printf("%s venceu! População: %ld\n", nome2, populacao2);
    } else {
    printf("Empate! Ambos têm população: %ld\n", populacao1);
    }


    return 0;
}
