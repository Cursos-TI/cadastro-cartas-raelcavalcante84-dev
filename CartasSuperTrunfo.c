#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao1, PontosTuristicos1;
    char estado_1;
    char cod_carta1[3], cidade1[20];
    float area_cidade1, PIB1;

    int populacao2, PontosTuristicos2;
    char estado_2;
    char cod_carta2[3], cidade2[20];
    float area_cidade2, PIB2;
  // Área para entrada de dados
    printf("Digite os dados da Carta 01: \n");

    printf("Digite a inicil do Estado: \n");
    scanf("%c", &estado_1);   // espaço antes do %c evita pegar '\n'

    printf("Digite o código da carta: \n");
    scanf("%s", &cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    printf(" \n");
    printf(" \n");

    printf("Digite os dados da Carta 02: \n");

    printf("Digite a inicil do Estado: \n");
    scanf(" %c", &estado_2);   // espaço antes do %c evita pegar '\n'
    printf("%c\n", estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", &cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    printf(" \n");
    printf(" \n");
  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    printf(" \n");
    printf(" \n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
return 0;
} 
