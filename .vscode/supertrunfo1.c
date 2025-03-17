#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_populacional1, pib_per_capita1, super_poder1;
    
    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2, super_poder2;
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%u", &populacao1);
    printf("Area (km): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%u", &populacao2);
    printf("Area (km): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);
    
    // Exibição dos Resultados
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! (%lu vs %lu)\n", populacao1, populacao2);
    } else {
        printf("Carta 2 venceu! (%lu vs %lu)\n", populacao2, populacao1);
    }
    
    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu! (%.2f km vs %.2f km)\n", area1, area2);
    } else {
        printf("Carta 2 venceu! (%.2f km vs %.2f km)\n", area2, area1);
    }
    
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu! (%.2f bi vs %.2f bi)\n", pib1, pib2);
    } else {
        printf("Carta 2 venceu! (%.2f bi vs %.2f bi)\n", pib2, pib1);
    }
    
    printf("Pontos Turisticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 venceu! (%d vs %d)\n", pontos_turisticos1, pontos_turisticos2);
    } else {
        printf("Carta 2 venceu! (%d vs %d)\n", pontos_turisticos2, pontos_turisticos1);
    }
    
    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 venceu! (%.2f hab/km vs %.2f hab/km)\n", densidade_populacional1, densidade_populacional2);
    } else {
        printf("Carta 2 venceu! (%.2f hab/km vs %.2f hab/km)\n", densidade_populacional2, densidade_populacional1);
    }
    
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu! (%.2f vs %.2f)\n", pib_per_capita1, pib_per_capita2);
    } else {
        printf("Carta 2 venceu! (%.2f vs %.2f)\n", pib_per_capita2, pib_per_capita1);
    }
    
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 venceu! (%.2f vs %.2f)\n", super_poder1, super_poder2);
    } else {
        printf("Carta 2 venceu! (%.2f vs %.2f)\n", super_poder2, super_poder1);
    }
    
    return 0;
}

//Esramos no NIvel 2 e estamos usando agora o "ELSE" e "IF", agora comparando as cartas!!!
