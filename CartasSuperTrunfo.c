// Desafio novato Super Trunfo

#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[20], nomeCidade2[20]; // Sem espaços
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados para a primeira carta
    printf("Digite a letra do Estado (A-H) para a Carta 1 (ex: SP,RJ,MG): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf(" %s", codigo1);
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
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf(" %s", codigo2);
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

    // Exibição das cartas geradas com as informações
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}


