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
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
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
    
    // Menu interativo
    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);
    
    do {
        printf("\nEscolha o segundo atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Numero de Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);
    
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = 1 / densidade_populacional1; valor1_carta2 = 1 / densidade_populacional2; break;
    }
    
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: valor2_carta1 = 1 / densidade_populacional1; valor2_carta2 = 1 / densidade_populacional2; break;
    }
    
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    printf("\nResultado:\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma_carta1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma_carta2);
    
    if (soma_carta1 > soma_carta2)
        printf("Vencedor: %s!\n", cidade1);
    else if (soma_carta1 < soma_carta2)
        printf("Vencedor: %s!\n", cidade2);
    else
        printf("Empate!\n");
    
    return 0;
}
// codigo completo e com tudo informado, (comparação, disputa de poder, ganhadores e organizado).
