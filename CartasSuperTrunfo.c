// Desafio Cartas Super Trunfo

#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[20], nomeCidade2[20]; // Sem espaços
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1,pibpercapta1,densidade2,pibpercapta2;

    //Titulo
    
    printf("************Desafio Cartas Super Trunfo ************ \n");

    // Entrada de dados para a primeira carta

    printf("\nDigite a letra do Estado (A-H) para a Carta 1 (ex: SP,RJ,MG): ");
    scanf(" %2s", estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da Cidade da Carta 1 (sem espaços): ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população da Cidade 1 (em milões): ");
    scanf(" %d", &populacao1);
    printf("Digite a área da Cidade 1 (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da Cidade 1 (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da Cidade 1: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta

    printf("\nDigite a letra do Estado (A-H) para a Carta 2 (ex: SP,RJ,MG): ");
    scanf(" %2s", estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da Cidade da Carta 2 (sem espaços): ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população da Cidade 2 (em milhões): ");
    scanf(" %d", &populacao2);
    printf("Digite a área da Cidade 2 (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da Cidade 2 (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da Cidade 2: ");
    scanf(" %d", &pontosTuristicos2);

    // Calcula do PIB per capta e da Densidade populacional

    densidade1 = (populacao1) / area1;
    densidade2 = (populacao2) /area2;
    pibpercapta1 = (pib1*1000000000) / (float)(populacao1);
    pibpercapta2 = (pib2*1000000000) / (float)(populacao2);


    // Exibição da carta 01

    printf("\nCarta 1: ");
    printf("\nEstado: %2s",estado1);
    printf("\nCódigo: %3s",codigo1);
    printf("\nNome da Cidade: %s",nomeCidade1);
    printf("\nPopulação: %d ",populacao1);
    printf("\nÁrea: %.2f km²",area1);
    printf("\nPIB: %.3f bilhões de reais",pib1);
    printf("\nNúmero de Pontos Turísticos: %d",pontosTuristicos1);
    printf("\nA densidade populacional é: %.2f hab/km²",densidade1);
    printf("\nO PIB per capta é: %.2f reais\n",pibpercapta1);

    // Exibição da carta 02

    printf("\nCarta 2: ");
    printf("\nEstado: %2s",estado2);
    printf("\nCódigo: %3s",codigo2);
    printf("\nNome da Cidade: %s",nomeCidade2);
    printf("\nPopulação: %d ",populacao2);
    printf("\nÁrea: %.2f km²",area2);
    printf("\nPIB: R$ %.3f bilhões",pib2);
    printf("\nNúmero de Pontos Turísticos: %d",pontosTuristicos2);
    printf("\nA densidade populacional é: %.2f hab/km²",densidade2);
    printf("\nO PIB per capta é: R$ %.2f reais\n",pibpercapta2);
    

    return 0;
}
