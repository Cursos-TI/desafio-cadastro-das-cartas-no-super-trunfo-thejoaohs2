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
    getchar();
    fgets(cidade1, 100, stdin);
    printf("Populacao: ");
    scanf("%u", &populacao1);
    printf("Area (km²): ");
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
    getchar();
    fgets(cidade2, 100, stdin);
    printf("Populacao: ");
    scanf("%u", &populacao2);
    printf("Area (km²): ");
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
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (super_poder1 > super_poder2) ? 1 : 2);
    
    return 0;
}
// OBS: Tive que usar o "fgets" e o "getchar" porque estava dando problemas no meu comando.
// Eu pesquisei e a soluçao era os espaços (ENTER) e entao eu usei para ficar mais bonito e funcional.
// Para resumir quando chegava em cidade, o codigo se bagunçava inteiro. EX: população se misturava com o codigo, area, PIB, pontos.
