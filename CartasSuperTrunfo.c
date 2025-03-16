#include <stdio.h>

#include <string.h> //Biblioteca para manipulação de String
int main() {

// Variaveis da carta 1
    char estado1[40];
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponto_turistico1;

// Variaveis da carta 2
    char estado2[40];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;

    //inicialização do jogo

    printf("____Super Trunfo de Paises____\n");

    printf("\n____VAMOS COMEÇAR!!____\n");

    printf("\n____Dados da Primeira Carta____\n"); //Mostrando ao jogador inicio de coleta de informações primeira carta

//Entrada da primeira carta 
    printf("\nDigite um estado (entre letra A a H):");
    scanf("%s", &estado1);
    printf("Digite o código da carta (1°letra do estado ex.A01):");
    scanf("%s" , codigo_carta1);
    printf("Digite o nome da cidade:");
    scanf("%s" , nome_cidade1);
    printf("Digite o numero da população da cidade:");
    scanf("%d" , &populacao1);
    printf("Digite a area em KM² da cidade:");
    scanf("%f" , &area1);
    printf("Digite o PIB da cidade:");
    scanf("%f" , &pib1);
    printf("Digite o numero de pontos turisticos dessa cidade:");
    scanf("%d" , &ponto_turistico1);


    printf("\n____Dados da Segunda Carta____\n"); // Mostrando ao jogador inicio de coleta de informações segunda carta

//Entranda de informações da segunda carta
    printf("Digite um estado (entre letra A a H):");
    scanf("%s", &estado2);
    printf("Digite o código da carta (1°letra do estado ex.A01):");
    scanf("%s" , codigo_carta2);
    printf("Digite o nome da cidade:");
    scanf("%s" , nome_cidade2);
    printf("Digite o numero da população da cidade:");
    scanf("%d" , &populacao2);
    printf("Digite a area em KM² da cidade:");
    scanf("%f" , &area2);
    printf("Digite o PIB da cidade:");
    scanf("%f" , &pib2);
    printf("Digite o numero de pontos turisticos da cidade:");
    scanf("%d" , &ponto_turistico2);

// Saida de informações da Primeira carta 
    printf("\n____Informações da Carta 1 ____\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n" , populacao1);
    printf("Área: %.2f KM²\n" , area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n" , ponto_turistico1);

// Saida de informações da Segunda carta
    printf("\n____Informações da Carta 2 ____\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %.2f KM²\n" , area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n" , ponto_turistico2);

    return 0;
}
