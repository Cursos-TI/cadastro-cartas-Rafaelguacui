#include <stdio.h>

int main() {

    // ===== VARIAVEIS CARTA 1 E 2 =====
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int população1, população2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // CADASTRO CARTA 1
    printf("\n=== CADASTRO CARTA 1 ===\n");
    printf("Estado ( com Uma letra ): ");
    scanf("%c", &estado1);
    printf("Código da Cidade (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &população1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos: ");
    scanf("%d", &pontos1);

    // CADASTRO CARTA 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado ( com Uma letra ): ");
    scanf(" %c", &estado2);
    printf("Código da Cidade (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &população2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos: ");
    scanf("%d", &pontos2);

    // ===== EXIBIÇÃO CARTA 1=====
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // ===== EXIBIÇÃO CARTA 2=====
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}