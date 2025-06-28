#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Informações da carta 1    
    char estado1;
    char codigo1[4];
    char cidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    float densidade1;
    float pib_per_capita1;

    float super_poder1;

    // // Informações da carta 2    
    char estado2;
    char codigo2[4];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    float densidade2;
    float pib_per_capita2;

    float super_poder2;

    // Entrada de dados da carta 1

    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em quilômetros quadrados da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB em milhões de reais da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

  

    // Entrada de dados da carta 2

    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área em quilômetros quadrados da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB em milhões de reais da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade demográfica

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita

    pib_per_capita1 = (float) pib1 / populacao1;
    pib_per_capita2 = (float) pib2 / populacao2;

    // Cálculo do super poder
    
    super_poder1 = (float) populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade1) + pontos_turisticos1;
    super_poder2 = (float) populacao2 + area2 + pib2 + pib_per_capita2 + (2 / densidade2) + pontos_turisticos2;


    // Saída de dados da carta 1

    printf("========== Carta 1 ====\n");
    printf("\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d de habitantes\n", populacao1);
    printf("Área: %f quilômetros quadrados \n", area1);
    printf("PIB: %f de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("\n");

    // Saída de dados da carta 2

    printf("========== Carta 2 ==========\n");
    printf("\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d de habitantes\n", populacao2);
    printf("Área: %f quilômetros quadrados \n", area2);
    printf("PIB: %f de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("\n");

    // Saída de dados da comparação

    printf("========== Comparação de Cartas ==========\n");
    printf("\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB Per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("\n");
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
