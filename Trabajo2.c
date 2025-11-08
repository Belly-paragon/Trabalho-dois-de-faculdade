#include <stdio.h>

int main() {
    // ======= DADOS DAS CARTAS =======
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 2.08; // em trilhões USD
    int pontosTuristicos1 = 15;

    char pais2[] = "Canada";
    int populacao2 = 39000000;
    float area2 = 9985000.0;
    float pib2 = 2.14; // em trilhões USD
    int pontosTuristicos2 = 18;

    // Densidade demográfica = população / área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_pais1, valor1_pais2;
    float valor2_pais1, valor2_pais2;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");
    printf("Cartas:\n1. %s\n2. %s\n\n", pais1, pais2);

    // ======= MENU 1: ESCOLHA DO PRIMEIRO ATRIBUTO =======
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("=============================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo1);

    // Validação de opção
    if (atributo1 < 1 || atributo1 > 5) {
        printf("\nOpção inválida! Encerrando programa.\n");
        return 0;
    }

    // ======= MENU 2: ESCOLHA DO SEGUNDO ATRIBUTO =======
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue; // não mostrar atributo já escolhido
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    printf("=============================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("\nOpção inválida! Encerrando programa.\n");
        return 0;
    }

    printf("\n===== RESULTADOS DAS COMPARAÇÕES =====\n");

    // ======= COMPARAÇÃO DO PRIMEIRO ATRIBUTO =======
    switch (atributo1) {
        case 1: // População
            valor1_pais1 = populacao1;
            valor1_pais2 = populacao2;
            printf("Atributo 1: População\n");
            break;
        case 2: // Área
            valor1_pais1 = area1;
            valor1_pais2 = area2;
            printf("Atributo 1: Área\n");
            break;
        case 3: // PIB
            valor1_pais1 = pib1;
            valor1_pais2 = pib2;
            printf("Atributo 1: PIB (trilhões USD)\n");
            break;
        case 4: // Pontos turísticos
            valor1_pais1 = pontosTuristicos1;
            valor1_pais2 = pontosTuristicos2;
            printf("Atributo 1: Pontos Turísticos\n");
            break;
        case 5: // Densidade demográfica (menor vence)
            valor1_pais1 = densidade1;
            valor1_pais2 = densidade2;
            printf("Atributo 1: Densidade Demográfica (hab/km²)\n");
            break;
    }

    printf("%s: %.2f | %s: %.2f\n", pais1, valor1_pais1, pais2, valor1_pais2);

    // Comparação do primeiro atributo (regra: menor vence só na densidade)
    int vencedor1 = (atributo1 == 5)
                    ? (valor1_pais1 < valor1_pais2 ? 1 : (valor1_pais2 < valor1_pais1 ? 2 : 0))
                    : (valor1_pais1 > valor1_pais2 ? 1 : (valor1_pais2 > valor1_pais1 ? 2 : 0));

    // ======= COMPARAÇÃO DO SEGUNDO ATRIBUTO =======
    switch (atributo2) {
        case 1:
            valor2_pais1 = populacao1;
            valor2_pais2 = populacao2;
            printf("\nAtributo 2: População\n");
            break;
        case 2:
            valor2_pais1 = area1;
            valor2_pais2 = area2;
            printf("\nAtributo 2: Área\n");
            break;
        case 3:
            valor2_pais1 = pib1;
            valor2_pais2 = pib2;
            printf("\nAtributo 2: PIB (trilhões USD)\n");
            break;
        case 4:
            valor2_pais1 = pontosTuristicos1;
            valor2_pais2 = pontosTuristicos2;
            printf("\nAtributo 2: Pontos Turísticos\n");
            break;
        case 5:
            valor2_pais1 = densidade1;
            valor2_pais2 = densidade2;
            printf("\nAtributo 2: Densidade Demográfica (hab/km²)\n");
            break;
    }

    printf("%s: %.2f | %s: %.2f\n", pais1, valor2_pais1, pais2, valor2_pais2);

    int vencedor2 = (atributo2 == 5)
                    ? (valor2_pais1 < valor2_pais2 ? 1 : (valor2_pais2 < valor2_pais1 ? 2 : 0))
                    : (valor2_pais1 > valor2_pais2 ? 1 : (valor2_pais2 > valor2_pais1 ? 2 : 0));

    // ======= SOMA DOS ATRIBUTOS =======
    float somaPais1 = valor1_pais1 + valor2_pais1;
    float somaPais2 = valor1_pais2 + valor2_pais2;

    printf("\n===== SOMA FINAL DOS ATRIBUTOS =====\n");
    printf("%s: %.2f + %.2f = %.2f\n", pais1, valor1_pais1, valor2_pais1, somaPais1);
    printf("%s: %.2f + %.2f = %.2f\n", pais2, valor1_pais2, valor2_pais2, somaPais2);

    // ======= RESULTADO FINAL =======
    printf("\n===== RESULTADO FINAL =====\n");

    if (somaPais1 > somaPais2)
        printf("🏆 Vencedor: %s!\n", pais1);
    else if (somaPais2 > somaPais1)
        printf("🏆 Vencedor: %s!\n", pais2);
    else
        printf("Empate!\n");

    printf("====================================\n");

    return 0;
}

