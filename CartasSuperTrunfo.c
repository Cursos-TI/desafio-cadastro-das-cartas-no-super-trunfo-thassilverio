#include <stdio.h>

int main(){
    char codigo1[4];
    char codigo2[4];
    char estado1[50];
    char estado2[50];
    char cidade1[50];
    char cidade2[50];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int pontoturistico1;
    int pontoturistico2;
    float densidade1;
    float densidade2;
    float PIBpercapita1;
    float PIBpercapita2;
    float Superpoder1;
    float Superpoder2;
   


    printf("Digite os dados da carta 1: \n");
    printf("\n");
    printf("Digite o código da carta (01 - 08): ");
    scanf("%s", &codigo1);
    printf("Digite o estado (uma letra de A - H): ");
    scanf("%s", &estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Área da cidade em km²: ");
    scanf("%f", &area1);
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
    scanf("%lu", &populacao2);
    printf("Área da cidade em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    printf("\n");


    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s, %s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n",cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área em Km²: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de Reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d \n", pontoturistico1);

    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f \n", densidade1);

    PIBpercapita1 = PIB1 / populacao1;
    printf("PIB per Capita: %.2f \n", PIBpercapita1);

    Superpoder1 = (float)populacao1 + area1 + PIB1 + (float)pontoturistico1 + PIBpercapita1 + (1.0/densidade1);
    printf("Super Poder: %f \n", Superpoder1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s, %s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área em Km²: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de Reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d \n", pontoturistico2);

    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f \n", densidade2);
 
    PIBpercapita2 = PIB2 / populacao2;
    printf("PIB per Capita: %.2f \n", PIBpercapita2);

    Superpoder2 = (float)populacao2 + area2 + PIB2 + (float)pontoturistico2 + PIBpercapita2 + (1.0/densidade2);
    printf("Super Poder: %f \n", Superpoder2);

    printf("\n \n");
    printf("Comparação de cartas:\n \n");

    printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
    printf("População: Carta 2 venceu (%d) \n", populacao2 > populacao1);
    printf("Área: Carta 1 venceu (%d) \n", area1 > area2);
    printf("Área: Carta 2 venceu (%d) \n", area2 > area1);
    printf("PIB: Carta 1 venceu (%d) \n", PIB1 > PIB2);
    printf("PIB: Carta 2 venceu (%d) \n", PIB2 > PIB1);
    printf("Pontos turísticos: Carta 1 venceu (%d) \n", pontoturistico1 >pontoturistico2);
    printf("Pontos turísticos: Carta 2 venceu (%d) \n", pontoturistico2 >pontoturistico1);
    printf("Densidade Populacional: Carta 1 venceu (%d) \n", densidade1 < densidade2);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", densidade2 < densidade1);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", PIBpercapita1 > PIBpercapita2);
    printf("PIB per Capita: Carta 2 venceu (%d) \n", PIBpercapita2 > PIBpercapita1);
    printf("Super Poder: Carta 1 venceu (%d) \n", Superpoder1 > Superpoder2);
    printf("Super Poder: Carta 2 venceu (%d) \n", Superpoder2 > Superpoder1);







    return 0;


}
