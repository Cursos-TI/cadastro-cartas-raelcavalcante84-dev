#include <stdio.h>

int main() {

    /* Dados da carta 1 */
    char pais1[] = "Brasil";
    int pop1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1445000.0;
    int pontos1 = 30;
    float dens1 = pop1 / area1;

    /* Dados da carta 2 */
    char pais2[] = "Alemanha";
    int pop2 = 83000000;
    float area2 = 357022.0;
    float pib2 = 4200000.0;
    int pontos2 = 40;
    float dens2 = pop2 / area2;

    int opcao;

    /* Menu */
    printf("===== COMPARACAO DE CARTAS =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n\n", pais1, pais2);

    switch (opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, pop1);
            printf("%s: %d\n", pais2, pop2);

            if (pop1 > pop2)
                printf("Vencedor: %s\n", pais1);
            else if (pop2 > pop1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, dens1);
            printf("%s: %.2f\n", pais2, dens2);

            /* Regra invertida: menor vence */
            if (dens1 < dens2)
                printf("Vencedor: %s\n", pais1);
            else if (dens2 < dens1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
