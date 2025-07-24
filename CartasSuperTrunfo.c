#include <stdio.h>
#include <locale.h>

void carta() {
    char estado, codigo[4], nomeCidade[50];
    int populacao, numPontosTuristicos;
    float area, pib;
    
    printf("Estado: ");
    scanf("%c", &estado);
    setbuf(stdin, 0);
    
    printf("Código: ");
    scanf("%s", codigo);
    setbuf(stdin, 0);
    
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade);
    setbuf(stdin, 0);
    
    printf("População: ");
    scanf("%d", &populacao);
    setbuf(stdin, 0);
    
    printf("Área: ");
    scanf("%f", &area);
    setbuf(stdin, 0);
    
    printf("PIB: ");
    scanf("%f", &pib);
    setbuf(stdin, 0);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos);
    setbuf(stdin, 0);

    printf("\n--RELATÓRIO--\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2fkm2\n", area);
    printf("PIB: R$ %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", numPontosTuristicos);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("Carta 1:\n");
    carta();
    
    printf("Carta 2:\n");
    carta();

    return 0;
}