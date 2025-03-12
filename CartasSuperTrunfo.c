// Desafio Cartas Super Trunfo

#include <stdio.h>

int main() {

    //Variaveis

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[20], nomeCidade2[20]; // Sem espaços
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1,pibpercapta1,densidade2,pibpercapta2;
    float superpoder1,superpoder2;
    int resultadoPop,resultadoArea,resultadoPib,resultadoDense,resultadoPibPC,resultadoSuper;

    //Titulo
    
    printf("************Desafio Cartas Super Trunfo ************ \n");

    // Entrada de dados para a primeira carta

    printf("\nDigite a letra do Estado (A-H) para a Carta 1 (ex: SP,RJ,MG): "); // SP
    scanf(" %2s", estado1);
    printf("Digite o código da Carta 1 (ex: A01): "); // A01
    scanf(" %3s", codigo1);
    printf("Digite o nome da Cidade da Carta 1 (sem espaços): ");//SaoPaulo
    scanf(" %s", nomeCidade1);
    printf("Digite a população da Cidade: "); //12325000
    scanf(" %d", &populacao1);
    printf("Digite a área da Cidade (em km²): "); //1521.11
    scanf(" %f", &area1);
    printf("Digite o PIB da Cidade(em bilhões): "); // 699.28
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da Cidade: "); // 50
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta

    printf("\nDigite a letra do Estado (A-H) para a Carta 2 (ex: SP,RJ,MG): "); //RJ
    scanf(" %2s", estado2);
    printf("Digite o código da Carta 2 (ex: B02): "); // A02
    scanf(" %3s", codigo2);
    printf("Digite o nome da Cidade (sem espaços): "); //RioDeJaneiro
    scanf(" %s", nomeCidade2);
    printf("Digite a população da Cidade: "); // 6748000
    scanf(" %d", &populacao2);
    printf("Digite a área da Cidade (em km²): "); // 1200.25
    scanf(" %f", &area2);
    printf("Digite o PIB da Cidade (em bilhões): "); // 300.50
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da Cidade: "); // 30
    scanf(" %d", &pontosTuristicos2);

    // Calculos do PIB per capta e da Densidade populacional

    densidade1 = (populacao1) / area1;
    densidade2 = (populacao2) /area2;
    pibpercapta1 = (pib1*1000000000) / (float)(populacao1);
    pibpercapta2 = (pib2*1000000000) / (float)(populacao2);

    //Calculos do super poder

    superpoder1 = (float)populacao1 + area1 +pib1 +pibpercapta1 + (1/densidade1);
    superpoder2 = (float)populacao2 + area2 +pib2 +pibpercapta2 + (1/densidade2);

    // Comparações cartas - item a item
    
    resultadoPop = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoDense = densidade1 < densidade2;
    resultadoPibPC = pibpercapta1 > pibpercapta2;
    resultadoSuper = superpoder1 > superpoder2;
    

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
    printf("\nO PIB per capta é: %.2f reais",pibpercapta1);
    printf("\nO Super poder é de: %.2f Newtons\n",superpoder1);

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
    printf("\nO PIB per capta é: R$ %.2f reais",pibpercapta2);
    printf("\nO Super poder é de: %.2f Newtons\n",superpoder2);

    // Resultado da comparação

    printf("\n***** Resultado da comparação das Cartas ******\n");

    printf("\n**Resultados da Carta 1**\n");

    printf("\nPopulação: Carta 1 venceu - (%d)",resultadoPop);
    printf ("\nArea: Carta 1 venceu - (%d)",resultadoArea);
    printf ("\nPib: Carta 1 venceu - (%d)",resultadoPib);
    printf ("\nDensidade: Carta 1 perdeu - (%d)",resultadoDense);
    printf ("\nPIB per capta: Carta 1 venceu - (%d)",resultadoPibPC);
    printf ("\nSuper Poder: Carta 1 venceu - (%d)\n",resultadoSuper);

    printf("\n**Resultados da Carta 2**\n");

    printf("\nPopulação: Carta 2 perdeu - (%d)",resultadoPop);
    printf ("\nArea: Carta 2 perdeu - (%d)",resultadoArea);
    printf ("\nPib: Carta 2 perdeu - (%d)",resultadoPib);
    printf ("\nDensidade: Carta 2 venceu - (%d)",resultadoDense);
    printf ("\nPIB per capta: Carta 2 perdeu - (%d)",resultadoPibPC);
    printf ("\nSuper Poder: Carta 2 perdeu - (%d)\n",resultadoSuper);

    printf("\n********** FIM DE JOGO **********");
    

    return 0;
}
