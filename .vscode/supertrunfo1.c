#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Esse programa cadastra duas cartas de cidades para o Super Trunfo, exibindo os dados organizados na tela.

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes do %c para ignorar o Enter anterior
    
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    getchar(); // Limpar o buffer antes de usar fgets
    fgets(cidade1, sizeof(cidade1), stdin);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Espaço antes do %c para ignorar o Enter anterior
    
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    getchar(); // Limpar o buffer antes de usar fgets
    fgets(cidade2, sizeof(cidade2), stdin);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1); // fgets já inclui o '\n'
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2); // fgets já inclui o '\n'
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    
    return 0;
}
// OBS: Tive que usar o "fgets" e o "getchar" porque estava dando problemas no meu comando.
// Eu pesquisei e a soluçao era os espaços (ENTER) e entao eu usei para ficar mais bonito e funcional.
// Para resumir quando chegava em cidade, o codigo se bagunçava inteiro. EX: população se misturava com o codigo, area, PIB, pontos.