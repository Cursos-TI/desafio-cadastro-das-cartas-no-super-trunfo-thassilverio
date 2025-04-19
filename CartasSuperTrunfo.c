#include <stdio.h>

int main(){
    char codigo1[4];
    char codigo2[4];
    char estado1[50];
    char estado2[50];
    char cidade1[50];
    char cidade2[50];
    int população1;
    int população2;
    float área1;
    float área2;
    float PIB1;
    float PIB2;
    int pontoturistico1;
    int pontoturistico2;

    printf("Digite os dados da carta 1: \n");
    printf("\n");
    printf("Digite o código da carta (01 - 08): ");
    scanf("%s", &codigo1);
    printf("Digite o estado (uma letra de A - H): ");
    scanf("%s", &estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &população1);
    printf("Área da cidade em km²: ");
    scanf("%f", &área1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico1);

    printf("\n");

    printf("Digite os dados da carta 2: \n");
    printf("\n");
    printf("Digite o código da carta 2 (01 - 08): ");
    scanf("%s", &codigo2);
    printf("Digite o estado (uma letra de A - H): ");
    scanf("%s", &estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &população2);
    printf("Área da cidade em km²: ");
    scanf("%f", &área2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    printf("\n");


    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s, %s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n",cidade1);
    printf("População: %d \n", população1);
    printf("Área em Km²: %f km²\n", área1);
    printf("PIB: %f bilhoes de Reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d \n", pontoturistico1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s, %s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("População: %d \n", população2);
    printf("Área em Km²: %f km²\n", área2);
    printf("PIB: %f bilhoes de Reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d \n", pontoturistico2);

 











    return 0;


}
