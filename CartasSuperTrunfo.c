#include <stdio.h>
#include <locale.h>

void display(char estado, char codigo[4], char nomeCidade[50], int populacao, int pontosTuristicos, float area, float pib, float densidadePopulacional, float pibPerCapita) {
    printf("\n--RELATÓRIO--\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2fkm2\n", area);
    printf("PIB: R$ %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("Carta 1:\n");
    char a_estado, a_codigo[4], a_nomeCidade[50];
    int a_populacao, a_pontosTuristicos;
    float a_area, a_pib;
    
    printf("Estado: ");
    scanf(" %c", &a_estado);

    printf("Código: ");
    scanf("%s", a_codigo);

    printf("Nome da Cidade: ");
    scanf("%s", a_nomeCidade);

    printf("População: ");
    scanf("%d", &a_populacao);

    printf("Área: ");
    scanf("%f", &a_area);

    printf("PIB: ");
    scanf("%f", &a_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &a_pontosTuristicos);
    
    display(a_estado, a_codigo, a_nomeCidade, a_populacao, a_pontosTuristicos, a_area, a_pib, a_populacao / a_area, a_pib / a_populacao);
    
    // --------------------
    
    printf("Carta 2:\n");
    char b_estado, b_codigo[4], b_nomeCidade[50];
    int b_populacao, b_pontosTuristicos;
    float b_area, b_pib;
    
    printf("Estado: ");
    scanf(" %c", &b_estado);

    printf("Código: ");
    scanf("%s", b_codigo);

    printf("Nome da Cidade: ");
    scanf("%s", b_nomeCidade);

    printf("População: ");
    scanf("%d", &b_populacao);

    printf("Área: ");
    scanf("%f", &b_area);

    printf("PIB: ");
    scanf("%f", &b_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &b_pontosTuristicos);
    
    display(b_estado, b_codigo, b_nomeCidade, b_populacao, b_pontosTuristicos, b_area, b_pib, b_populacao / b_area, b_pib / b_populacao);
    return 0;
}