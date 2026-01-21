#include <stdio.h>

int main() {

    int resultado1, resultado2;

    /* ===== CARTA 1 ===== */
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1445000.0; // em milhões USD
    int pontos1 = 30;
    float densidade1 = (float) populacao1 / area1;


    /* ===== CARTA 2 ===== */
    char pais2[] = "Alemanha";
    int populacao2 = 83000000;
    float area2 = 357022.0;
    float pib2 = 4200000.0; // em milhões USD
    int pontos2 = 40;
    float densidade2 = (float) populacao2 / area2;

    int atributo1, atributo2;

    float valor1_atr1 = 0, valor2_atr1 = 0;
    float valor1_atr2 = 0, valor2_atr2 = 0;

    float soma1 = 0, soma2 = 0;

    /* ===== MENU DO PRIMEIRO ATRIBUTO ===== */
    printf("===== ESCOLHA O PRIMEIRO ATRIBUTO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");

    scanf("%d", &atributo1);

    if (atributo1 <=0 || atributo1 >=6) {
        printf("Entrada invalida!\n");
        return 1;
    }

    /* ===== FUNÇÃO LÓGICA DO ATRIBUTO 1 ===== */
    switch (atributo1) {
        case 1:
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr1 = populacao1;
            valor2_atr1 = populacao2;
            break;
        case 2:
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr1 = area1;
            valor2_atr1 = area2;
            break;
        case 3:
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr1 = pib1;
            valor2_atr1 = pib2;
            break;
        case 4:
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr1 = pontos1;
            valor2_atr1 = pontos2;
            break;
        case 5:
            /* Regra invertida: menor vence */
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr1 = densidade1;
            valor2_atr1 = densidade2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 1;
    }

        /* ===== MENU DINÂMICO DO SEGUNDO ATRIBUTO ===== */
    printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");

    scanf("%d", &atributo2);

    if (atributo2 <=0 || atributo2 >=6 || atributo2 == atributo1) {
        printf("Opcao invalida!\n");
        return 1;
    }

    /* ===== FUNÇÃO LÓGICA DO ATRIBUTO 2 ===== */
    switch (atributo2) {
        case 1:
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr2 = populacao1;
            valor2_atr2 = populacao2;
            break;
        case 2:
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr2 = area1;
            valor2_atr2 = area2;
            break;
        case 3:
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr2 = pib1;
            valor2_atr2 = pib2;
            break;
        case 4:
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr2 = pontos1;
            valor2_atr2 = pontos2;
            break;
        case 5:
            /* Regra invertida: menor vence */
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            valor1_atr2 = densidade1;
            valor2_atr2 = densidade2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 1;
    }

    /* ===== SOMA DOS ATRIBUTOS ===== */
    soma1 = valor1_atr1 + valor1_atr2;
    soma2 = valor2_atr1 + valor2_atr2;

    /* ===== EXIBIÇÃO DO RESULTADO ===== */
    printf("\n===== RESULTADO DA COMPARACAO =====\n");
    printf("%s x %s\n\n", pais1, pais2);

    printf("Atributo 1: %.2f x %.2f\n", valor1_atr1, valor2_atr1);
    printf("Atributo 2: %.2f x %.2f\n\n", valor1_atr2, valor2_atr2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    printf("\nResultado final: ");
    printf("%s\n", (soma1 > soma2) ? pais1 :
                     (soma2 > soma1) ? pais2 :
                     "Empate!");

    return 0;
}
