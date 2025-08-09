#include <stdio.h>
#include <string.h>

int main() {

    char codigo1[10], nome1[50];
    int populacao1;
    float area1, pib1;

    char codigo2[10], nome2[50];
    int populacao2;
    float area2, pib2;

    printf("=== Cadastro da Cidade 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("\n=== Cadastro da Cidade 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    int pontos1 = 0, pontos2 = 0;

    printf("\n=== Comparação das Cidades ===\n");

    if (populacao1 > populacao2) {
        printf("População: %s vence\n", nome1);
        pontos1++;
    } else if (populacao2 > populacao1) {
        printf("População: %s vence\n", nome2);
        pontos2++;
    } else {
        printf("População: Empate\n");
    }

    if (area1 > area2) {
        printf("Área: %s vence\n", nome1);
        pontos1++;
    } else if (area2 > area1) {
        printf("Área: %s vence\n", nome2);
        pontos2++;
    } else {
        printf("Área: Empate\n");
    }
    if (pib1 > pib2) {
        printf("PIB: %s vence\n", nome1);
        pontos1++;
    } else if (pib2 > pib1) {
        printf("PIB: %s vence\n", nome2);
        pontos2++;
    } else {
        printf("PIB: Empate\n");
    }

    printf("\n=== Resultado Final ===\n");
    if (pontos1 > pontos2) {
        printf("Vencedora: %s (%d pontos)\n", nome1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("Vencedora: %s (%d pontos)\n", nome2, pontos2);
    } else {
        printf("Empate geral!\n");
    }

    return 0;
}
