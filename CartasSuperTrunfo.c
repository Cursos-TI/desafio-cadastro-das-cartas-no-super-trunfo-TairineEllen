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

    // // Informações da carta 2    
    char estado2;
    char codigo2[4];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados da carta 1

    printf("Digite o estado da carta 1:\n");
    scanf("%c", &estado1);

    printf("Digite o código da carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade da carta 1:\n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1:\n");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da carta 2

    printf("Digite o estado da carta 2:\n");
    scanf("%c", &estado2);

    printf("Digite o código da carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite a cidade da carta 2:\n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2:\n");
    scanf("%d", &pontos_turisticos2);

    // Saída de dados da carta 1

    printf("A estado da carta 1 é %c\n", estado1);
    printf("O código da carta 1 é %s\n", codigo1);
    printf("A cidade da carta 1 é %s\n", cidade1);
    printf("A população da carta 1 é %d\n", populacao1);
    printf("A área da carta 1 é %f\n", area1);
    printf("O PIB da carta 1 é %f\n", pib1);
    printf("O número de pontos turísticos da carta 1 é %d\n", pontos_turisticos1);

    // Saída de dados da carta 2

    printf("A estado da carta 2 é %c\n", estado2);
    printf("O código da carta 2 é %s\n", codigo2);
    printf("A cidade da carta 2 é %s\n", cidade2);
    printf("A população da carta 2 é %d\n", populacao2);
    printf("A área da carta 2 é %f\n", area2);
    printf("O PIB da carta 2 é %f\n", pib2);
    printf("O número de pontos turísticos da carta 2 é %d\n", pontos_turisticos2);

    return 0;
}
