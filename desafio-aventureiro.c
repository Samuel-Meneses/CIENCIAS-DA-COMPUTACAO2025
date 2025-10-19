// Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

// Nome da Cidade: O nome da cidade. Tipo: char[] (string)

// População: O número de habitantes da cidade. Tipo: int

// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

// PIB: O Produto Interno Bruto da cidade. Tipo: float

// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

// Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.

// Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.

#include <stdio.h>

int main()
{
    char estado1[100];
    char codigo_carta1[50];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area_cidade1;
    float PIB1;
    int ponto_turistico1;
    float densidade_polulacional1;
    float PIB_per_capita1;

    char estado2[100];
    char codigo_carta2[50];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area_cidade2;
    float PIB2;
    int ponto_turistico2;
    float densidade_polulacional2;
    float PIB_per_capita2;

    float super_poder1, super_poder2;

    int Resultado_populacao, resultado_area, resultado_PIB, resultado_ponto_turistico, Resultado_densidade_populacional, Resultado_super_poder;

    printf("DADOS DA CARTA 1:\n");

    printf("Digite o Estado:");
    scanf(" %s", &estado1);

    printf("Digite as duas letras do seu Estado mais dois numeros(ex: CE02):\n");
    scanf(" %s", &codigo_carta1);

    printf("Nome da Cidade:\n");
    scanf(" %s", &nome_cidade1);

    printf("Digite a População:\n");
    scanf(" %u", &populacao1);

    printf("Digite a Area da cidade em KM²:\n");
    scanf(" %f", &area_cidade1);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &PIB1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf(" %d", &ponto_turistico1);

    densidade_polulacional1 = ((populacao1) / (area_cidade1));

    PIB_per_capita1 = ((PIB1) / (populacao1));

    super_poder1 = (populacao1 + area_cidade1 + PIB1 + ponto_turistico1) + (1 / densidade_polulacional1);

    printf("DADOS DA CARTA 2:\n");

    printf("Digite o Estado:");
    scanf(" %s", &estado2);

    printf("Digite as duas letras do seu Estado mais dois numeros(ex: CE02):\n");
    scanf(" %s", &codigo_carta2);

    printf("Nome da Cidade:\n");
    scanf(" %s", &nome_cidade2);

    printf("Digite a População:\n");
    scanf(" %u", &populacao2);

    printf("Digite a Area da cidade em KM²:\n");
    scanf(" %f", &area_cidade2);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf(" %d", &ponto_turistico2);

    // divisão - nivel aventureiro

    densidade_polulacional2 = ((populacao2) / (area_cidade2));

    PIB_per_capita2 = ((PIB2) / (populacao2));

    super_poder2 = (populacao2 + area_cidade2 + PIB2 + ponto_turistico2) + (1 / densidade_polulacional2);

    printf("****** DADOS DA CARTA 1 ******\n\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo da carta:%s\n", codigo_carta1);
    printf("Cidade:%s\n", nome_cidade1);
    printf("População:%d\n", populacao1);
    printf("Area:%f KM²\n", area_cidade1);
    printf("PIB:%f\n", PIB1);
    printf("Quantidade de Pontos turisticos:%d\n", ponto_turistico1);
    printf("A densidade populacional é: %f\n", densidade_polulacional1);
    printf("O PIB PER CAPITA é: %f\n\n", PIB_per_capita1);

    printf("***** DADOS DA CARTA 2 ***** \n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f KM²\n", area_cidade2);
    printf("PIB: %f\n", PIB1);
    printf("Quantidade de Pontos turisticos: %d\n", ponto_turistico2);
    printf("A densidade populacional é: %f\n", densidade_polulacional2);
    printf("O PIB PER CAPITA é: %f\n\n", PIB_per_capita2);

    // Comparação das cartas - nivel mestre

    //     Resultado_populacao = populacao1 > populacao2;
    //     resultado_area = area_cidade1 > area_cidade2;
    //     resultado_PIB = PIB1 > PIB2;
    //     resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;
    //     Resultado_densidade_populacional = densidade_polulacional1 < densidade_polulacional2;
    //     Resultado_super_poder = super_poder1 > super_poder2;

    // // Comparação das cartas - nivel mestre

    //     printf("**********   RESULTADO   **********\n\n");
    //     printf("Comparção das cartas:\n\n ");
    //     printf("População: A carta 1 venceu %d\n", Resultado_populacao);
    //     printf("Area da Cidade: A carta 1 venceu %d\n", resultado_area);
    //     printf("PIB: A carta 1 venceu %d\n", resultado_PIB);
    //     printf("Ponto Turistico: A carta 1 venceu %d\n", resultado_ponto_turistico);
    //     printf("Densidade Populacional: A carta 1 venceu %d\n", Resultado_densidade_populacional);
    //     printf("Super poder: A carta 1 venceu %d\n", Resultado_super_poder);

    return (0);
}