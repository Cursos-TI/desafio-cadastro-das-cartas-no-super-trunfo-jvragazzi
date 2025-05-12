#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das informações calculadas
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
