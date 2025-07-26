#include <stdio.h>

void display(char estado, char codigo[4], char nomeCidade[30], unsigned long int populacao, short int pontosTuristicos, float area, float pib, float densidadePopulacional, float pibPerCapita)
{
    printf("\n--RELATÓRIO--\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2fkm2\n", area);
    printf("PIB: R$ %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);
}

int main()
{
    printf("Carta 1:\n");
    char a_estado, a_codigo[4], a_nomeCidade[30];
    unsigned long int a_populacao;
    short int a_pontosTuristicos;
    float a_area, a_pib, a_densidadePopulacional, a_pibPerCapita;

    printf("Estado: ");
    scanf(" %c", &a_estado);

    printf("Código: ");
    scanf(" %s", a_codigo);

    printf("Nome da Cidade: ");
    scanf(" %29[^\n]s", a_nomeCidade);

    do
    {
        printf("População (hab > 0): ");
        scanf(" %lu", &a_populacao);
    } while (a_populacao <= 0);

    do
    {
        printf("Área (km2 > 0): ");
        scanf(" %f", &a_area);
    } while (a_area <= 0);

    a_densidadePopulacional = a_populacao / a_area;
    
    printf("PIB (bilhões): ");
    scanf(" %f", &a_pib);

    a_pibPerCapita = a_pib * 1000000000.0f / (float)a_populacao;
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %hd", &a_pontosTuristicos);

    display(a_estado, a_codigo, a_nomeCidade, a_populacao, a_pontosTuristicos, a_area, a_pib, a_densidadePopulacional, a_pibPerCapita);

    // --------------------------------------------------------------------

    printf("Carta 2:\n");
    char b_estado, b_codigo[4], b_nomeCidade[30];
    unsigned long int b_populacao;
    short int b_pontosTuristicos;
    float b_area, b_pib, b_densidadePopulacional, b_pibPerCapita;

    printf("Estado: ");
    scanf(" %c", &b_estado);

    printf("Código: ");
    scanf(" %s", b_codigo);

    printf("Nome da Cidade: ");
    scanf(" %29[^\n]s", b_nomeCidade);

    do
    {
        printf("População (hab > 0): ");
        scanf(" %lu", &b_populacao);
    } while (b_populacao <= 0);

    do
    {
        printf("Área (km2 > 0): ");
        scanf(" %f", &b_area);
    } while (b_area <= 0);

    b_densidadePopulacional = b_populacao / b_area;

    printf("PIB (bilhões): ");
    scanf(" %f", &b_pib);

    b_pibPerCapita = b_pib * 1000000000.0f / (float)b_populacao;

    printf("Número de Pontos Turísticos: ");
    scanf(" %hd", &b_pontosTuristicos);

    display(b_estado, b_codigo, b_nomeCidade, b_populacao, b_pontosTuristicos, b_area, b_pib, b_densidadePopulacional, b_pibPerCapita);

    return 0;
}