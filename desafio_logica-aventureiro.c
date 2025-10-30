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

    int opcao;
    char opcao3;

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

    densidade_polulacional2 = ((populacao2) / (area_cidade2));

    PIB_per_capita2 = ((PIB2) / (populacao2));

    super_poder2 = (populacao2 + area_cidade2 + PIB2 + ponto_turistico2) + (1 / densidade_polulacional2);

    Resultado_populacao = populacao1 > populacao2;

    resultado_area = area_cidade1 > area_cidade2;

    resultado_PIB = PIB1 > PIB2;

    resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;

    Resultado_densidade_populacional = densidade_polulacional1 < densidade_polulacional2;

    Resultado_super_poder = super_poder1 > super_poder2;

    densidade_polulacional1 = ((populacao1) / (area_cidade1));

    PIB_per_capita1 = ((PIB1) / (populacao1));

    super_poder1 = (populacao1 + area_cidade1 + PIB1 + ponto_turistico1) + (1 / densidade_polulacional1);

    printf("Ok. Recebemos todos os dados de ambos os jogadores.\n Agora Escolha as opções abaixo:");
    printf("**********   RESULTADO   **********\n\n");
    printf("Comparação das cartas:\n");
    printf("Escolha uma opção:\n\n");
    printf("1 - Para resultado parcial\n");
    printf("2 - Para resultado final\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf(" Qual Atributo você quer escolher:\n");
        printf(" a - População e Area da cidade;\n");
        printf(" b - População e PIB;\n");
        printf(" c - População e Pontos Turisticos;\n");
        printf(" d - População e Densidade;\n");
        printf(" e - Area da Cidade e PIB;\n");
        printf(" f - Area da Cidade e Pontos Turisticos;\n");
        printf(" g - Area da Cidade e Densidade Populacional;\n");
        printf(" h - PIB e Pontos Turisticos;\n");
        printf(" i - PIB e Densidade Populacional;\n");
        printf(" j - Pontos Turisticos e Densidade Populacional;\n");
        printf(" k - Super Poder;\n");
        scanf("%s", &opcao3);

    case 2:
        printf("Atributo usado foi População:");
        printf("A carta 1 tem: %f\n", populacao1);
        printf("A carta 2 tem: %f\n", populacao2);
        printf("Resultado foi: \n");
        if (Resultado_populacao == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if (populacao1 == populacao2)
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu!\n");
        }

    default:
        printf("Nenhuma opção valida!");
        break;
    }

    switch (opcao3)
    {
    case 'a':
    case 'A':
        printf("Ok. foi optou pelo atributo População e Area da cidade:\n O resultado foi:\n");
        if (Resultado_populacao & resultado_area == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((populacao1 == populacao2) & (area_cidade1 == area_cidade2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

        break;

    case 'b':
    case 'B':
        if (Resultado_populacao & resultado_PIB == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((populacao1 == populacao2) & (PIB1 == PIB2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }
    case 'c':
    case 'C':
        if (Resultado_populacao & resultado_ponto_turistico == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((populacao1 == populacao2) & (ponto_turistico1 == ponto_turistico2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }
    case 'd':
    case 'D':
        if (Resultado_populacao & Resultado_densidade_populacional == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((populacao1 == populacao2) & (densidade_polulacional1 == densidade_polulacional2) == 0)
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'e':
    case 'E':
        if (resultado_area & resultado_PIB == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((area_cidade1 == area_cidade2) & (PIB1 == PIB2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'f':
    case 'F':
        if (resultado_area & resultado_ponto_turistico == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((area_cidade1 == area_cidade2) & (ponto_turistico1 == ponto_turistico2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'g':
    case 'G':
        if (resultado_area & Resultado_densidade_populacional == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((area_cidade1 == area_cidade2) & (densidade_polulacional1 == densidade_polulacional2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'h':
    case 'H':
        if (resultado_PIB & resultado_ponto_turistico == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((PIB1 == PIB2) & (ponto_turistico1 == ponto_turistico2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'i':
    case 'I':
        if (resultado_PIB & Resultado_densidade_populacional == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((PIB1 == PIB2) & (densidade_polulacional1 == densidade_polulacional2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'j':
    case 'J':
        if (resultado_ponto_turistico & Resultado_densidade_populacional == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if ((ponto_turistico1 == ponto_turistico2) & (densidade_polulacional1 == densidade_polulacional2))
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

    case 'k':
    case 'K':
        if (Resultado_super_poder == 0)
        {
            printf("A carta 1 venceu!\n");
        }

        if (super_poder1 == super_poder2)
        {
            printf("Houve empate!\n");
        }

        else

        {
            printf("A carta 2 venceu\n");
        }

        break;

    default:
        printf("Nenhuma opção valida digitada");
        break;

        return (0);
    }
}
