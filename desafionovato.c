// // Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

// Nome da Cidade: O nome da cidade. Tipo: char[] (string)

// População: O número de habitantes da cidade. Tipo: int

// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

// PIB: O Produto Interno Bruto da cidade. Tipo: float

// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

// Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.
#include <stdio.h>

int main()
{
    char estado1[100];
    char codigo_carta1[50];
    char nome_cidade1[50];
    int populacao1;
    float area_cidade1;
    float PIB1;
    int ponto_turistico1;

    char estado2[100];
    char codigo_carta2[50];
    char nome_cidade2[50];
    int populacao2;
    float area_cidade2;
    float PIB2;
    int ponto_turistico2;

    printf("DADOS DA CARTA 1:\n");

    printf("Digite o Estado:");
    scanf(" %s", &estado1);

    printf("Digite as duas letras do seu Estado mais dois numeros(ex: CE02):\n");
    scanf(" %s", &codigo_carta1);

    printf("Nome da Cidade:\n");
    scanf(" %s", &nome_cidade1);

    printf("Digite a População:\n");
    scanf(" %d", &populacao1);

    printf("Digite a Area da cidade em KM²:\n");
    scanf(" %f", &area_cidade1);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &PIB1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf(" %d", &ponto_turistico1);

    printf("DADOS DA CARTA 2:\n");

    printf("Digite o Estado:");
    scanf(" %s", &estado2);

    printf("Digite as duas letras do seu Estado mais dois numeros(ex: CE02):\n");
    scanf(" %s", &codigo_carta2);

    printf("Nome da Cidade:\n");
    scanf(" %s", &nome_cidade2);

    printf("Digite a População:\n");
    scanf(" %3f", &populacao2);

    printf("Digite a Area da cidade em KM²:\n");
    scanf(" %3f", &area_cidade2);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %3f", &PIB2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf(" %d", &ponto_turistico2);

    printf("Dados da Carta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo da carta:%s\n", codigo_carta1);
    printf("Cidade:%s\n", nome_cidade1);
    printf("População:%d\n", populacao1);
    printf("Area:%f KM²\n", area_cidade1);
    printf("PIB:%f\n", PIB1);
    printf("Quantidade de Pontos turisticos:%d\n", ponto_turistico1);
    printf("Dados da Carta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo da carta:%s\n", codigo_carta2);
    printf("Cidade:%s\n", nome_cidade2);
    printf("População:%d\n", populacao2);
    printf("Area:%f KM²\n", area_cidade2);
    printf("PIB:%f\n", PIB1);
    printf("Quantidade de Pontos turisticos:%d\n", ponto_turistico2);

    return (0);
}