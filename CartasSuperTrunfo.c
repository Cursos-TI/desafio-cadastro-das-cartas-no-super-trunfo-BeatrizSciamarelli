#include <stdio.h>

#include <string.h> //Biblioteca para manipulação de String
int main() {

// Variaveis da carta 1
    char estado1[40];
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontoTuristico1;
    float densidadepopu1 , pibperCapita1, superPoder1;
    

// Variaveis da carta 2
    char estado2[40];
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidadepopu2 , pibperCapita2, superPoder2;
    
    //inicialização do jogo

    printf("____Super Trunfo de Paises____\n");
    printf("\n____VAMOS COMEÇAR!!____\n");
    printf("\n____Dados da Primeira Carta____\n"); //Mostrando ao jogador inicio de coleta de informações primeira carta

//Entrada da primeira carta 
    printf("\nDigite um Estado (entre letra A a H):");
    scanf("%s", &estado1);
    printf("Digite o Código da carta (1°letra do estado ex.A01):");
    scanf("%s" , codigo_carta1);
    printf("Digite o Nome da cidade:");
    scanf("%s" , nome_cidade1);
    printf("Digite o Número de população da cidade:");
    scanf("%lu" , &populacao1);
    printf("Digite a Área em KM² da cidade:");
    scanf("%f" , &area1);
    printf("Digite o PIB da cidade:");
    scanf("%f" , &pib1);
    printf("Digite o Número de pontos turísticos dessa cidade:");
    scanf("%d" , &pontoTuristico1);


    printf("\n____Dados da Segunda Carta____\n"); // Mostrando ao jogador inicio de coleta de informações segunda carta

//Entranda de informações da segunda carta
    printf("Digite um Estado (entre letra A a H):");
    scanf("%s", &estado2);
    printf("Digite o Código da carta (1°letra do estado ex.A01):");
    scanf("%s" , codigo_carta2);
    printf("Digite o Nome da cidade:");
    scanf("%s" , nome_cidade2);
    printf("Digite o Número de população da cidade:");
    scanf("%lu" , &populacao2);
    printf("Digite a Área em KM² da cidade:");
    scanf("%f" , &area2);
    printf("Digite o PIB da cidade:");
    scanf("%f" , &pib2);
    printf("Digite o Número de pontos turísticos da cidade:");
    scanf("%d" , &pontoTuristico2);

// Saida de informações da Primeira carta 
    printf("\n____Informações da Carta 1 ____\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n" , populacao1);
    printf("Área: %.2f KM²\n" , area1);
    printf("PIB (em Bilhões de reais) %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n" , pontoTuristico1);
    // Calulando a Densidade Populacional
    densidadepopu1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f Hab/Km²\n" , densidadepopu1);
    //Calculando o Pib per Capita
    pibperCapita1 = (float)pib1 * 1000000000.0f / (float)populacao1;
    printf("PIB per Capita: %.2f Reais\n" , pibperCapita1);

// Saida de informações da Segunda carta
    printf("\n____Informações da Carta 2 ____\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n" , populacao2);
    printf("Área: %.2f KM²\n" , area2);
    printf("PIB (em Bilhões de reais) %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n" , pontoTuristico2);
    // Calulando a Densidade Populacional
    densidadepopu2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f Hab/Km²\n" , densidadepopu2);
    //Calculando o Pib per Capita
    pibperCapita2 = (float)pib2 * 1000000000.0f / (float)populacao2;
    printf("PIB per Capita: %.2f Reais\n" , pibperCapita2);

    // Calculando o Super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontoTuristico1 + pibperCapita1 + (1.0f / densidadepopu1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontoTuristico2 + pibperCapita2 + (1.0f / densidadepopu2);

    //Realizando as comparações 
    int resultadoPop, resultadoArea, resultadoPib, resultadoPontos, resultadoDensi, resultadoPercapita, resultadoSuper;
    resultadoPop = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontos = pontoTuristico1 > pontoTuristico2;
    resultadoDensi = densidadepopu1 > densidadepopu2;
    resultadoPercapita = pibperCapita1 > pibperCapita2;
    resultadoSuper = superPoder1 > superPoder2;

    //Exibindo os resultados das comparações
    printf("\n______Comparação de Cartas______\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPop);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensi);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuper);


   

   return 0;
}
