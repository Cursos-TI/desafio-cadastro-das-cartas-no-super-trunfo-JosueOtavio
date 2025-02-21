#include <stdio.h>



int main() {
    // Variáveis para armazenar os dados da Carta 1
    char estado1;
    char codigodaCarta1[5];
    char Cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;

    // Variáveis para armazenar os dados da Carta 2
    char estado2;
    char codigodaCarta2[5];
    char Cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodaCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("\n");

    
    // Entrada de dados para a Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodaCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodaCarta1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numeroDePontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodaCarta2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", numeroDePontosTuristicos2);


   

    return 0;
}
