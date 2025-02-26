#include <stdio.h>


int main() {
    // Variáveis para armazenar os dados da Carta 1
    char estado1, codigodaCarta1[5], cidade1[50];
    int populacao1, numero_De_Pontos_Turisticos1;
    float area_da_cidade1, pib1; 
    
    
   // Variáveis para armazenar os dados da Carta 2
    char estado2, codigodaCarta2[5], cidade2[50];
    int populacao2, numero_De_Pontos_Turisticos2;
    float area_da_cidade2, pib2; 
        
    
    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodaCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_da_cidade1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_De_Pontos_Turisticos1);
     
    printf("\n");
    


    // Entrada de dados para a Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodaCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_da_cidade2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_De_Pontos_Turisticos2);

    printf("\n");


    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_da_cidade1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numero_De_Pontos_Turisticos1);
    

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_da_cidade2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_De_Pontos_Turisticos2);



    return 0;
}
