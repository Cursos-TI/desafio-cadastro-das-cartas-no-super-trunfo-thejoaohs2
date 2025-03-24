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
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Comparando %s (Carta 1) e %s (Carta 2)\n", cidade1, cidade2);
    
    switch (escolha) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s!\n", cidade1);
            else if (populacao1 < populacao2)
                printf("Vencedor: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s!\n", cidade1);
            else if (area1 < area2)
                printf("Vencedor: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s!\n", cidade1);
            else if (pib1 < pib2)
                printf("Vencedor: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: %s!\n", cidade1);
            else if (pontos_turisticos1 < pontos_turisticos2)
                printf("Vencedor: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Populacional (Regra invertida)
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
                printf("Vencedor: %s!\n", cidade1);
            else if (densidade_populacional1 > densidade_populacional2)
                printf("Vencedor: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
    }

    return 0;
}
// agora aprendemos o (SWITCH) e concluimos o (IF) e o (ELSE)!!!
