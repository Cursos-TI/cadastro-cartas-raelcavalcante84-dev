#include <stdio.h>

/* ============================================================
   FUNÇÕES RECURSIVAS PARA MOVIMENTOS DAS PEÇAS
   ============================================================ */

/* ------------------------------------------------------------
   TORRE - Movimento Recursivo
   Parâmetro: casasRestantes - quantas casas ainda faltam mover
   A cada chamada recursiva, imprime "Direita" e decrementa o
   contador até chegar a zero (caso base).
   ------------------------------------------------------------ */
void moverTorre(int casasRestantes) {
    /* Caso base: sem casas restantes, encerra a recursão */
    if (casasRestantes == 0) {
        return;
    }
    printf("Direita\n");
    /* Chamada recursiva com uma casa a menos */
    moverTorre(casasRestantes - 1);
}

/* ------------------------------------------------------------
   BISPO - Movimento Recursivo com Loops Aninhados
   Parâmetro: casasRestantes - quantas casas diagonais restam
   A recursão controla o avanço diagonal total.
   Dentro de cada nível recursivo, loops aninhados representam:
     - loop externo: o passo vertical (Cima)
     - loop interno: o passo horizontal (Direita)
   Como a diagonal é 1 casa por chamada, cada loop roda 1 vez,
   evidenciando a estrutura aninhada conforme o requisito.
   ------------------------------------------------------------ */
void moverBispo(int casasRestantes) {
    /* Caso base: sem casas restantes, encerra a recursão */
    if (casasRestantes == 0) {
        return;
    }

    /* Loop externo: controla o movimento vertical (1 passo por chamada) */
    for (int vertical = 0; vertical < 1; vertical++) {
        /* Loop interno: controla o movimento horizontal (1 passo por casa diagonal) */
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    /* Chamada recursiva com uma casa diagonal a menos */
    moverBispo(casasRestantes - 1);
}

/* ------------------------------------------------------------
   CAVALO - Movimento Recursivo em "L"
   Parâmetros:
     passosVerticais   - casas para Cima ainda a percorrer (inicia em 2)
     passosHorizontais - casas para Direita ainda a percorrer (inicia em 1)
   
   Lógica da recursão:
     1. Caso base: ambos os contadores zerados → movimento concluído.
     2. Se ainda há passos verticais, imprime "Cima" e chama
        recursivamente decrementando passosVerticais.
     3. Quando passosVerticais chega a 0, imprime "Direita" e chama
        recursivamente decrementando passosHorizontais.
   Isso garante a sequência: Cima → Cima → Direita.
   ------------------------------------------------------------ */
void moverCavalo(int passosVerticais, int passosHorizontais) {
    /* Caso base: nenhum passo restante, encerra a recursão */
    if (passosVerticais == 0 && passosHorizontais == 0) {
        return;
    }

    /* Fase vertical: enquanto há casas para subir, move para Cima */
    if (passosVerticais > 0) {
        printf("Cima\n");
        /* Chamada recursiva diminuindo um passo vertical */
        moverCavalo(passosVerticais - 1, passosHorizontais);
        return;
    }

    /* Fase horizontal: passos verticais esgotados, move para Direita */
    printf("Direita\n");
    /* Chamada recursiva diminuindo um passo horizontal */
    moverCavalo(passosVerticais, passosHorizontais - 1);
}

/* ------------------------------------------------------------
   RAINHA - Movimento Recursivo
   Parâmetro: casasRestantes - quantas casas ainda faltam mover
   A cada chamada recursiva, imprime "Esquerda" e decrementa o
   contador até chegar a zero (caso base).
   ------------------------------------------------------------ */
void moverRainha(int casasRestantes) {
    /* Caso base: sem casas restantes, encerra a recursão */
    if (casasRestantes == 0) {
        return;
    }
    printf("Esquerda\n");
    /* Chamada recursiva com uma casa a menos */
    moverRainha(casasRestantes - 1);
}

/* ============================================================
   FUNÇÃO PRINCIPAL
   ============================================================ */
int main() {

    /* -------------------------------------------------------
       TORRE - Recursiva
       Movimento: 5 casas para a Direita
       ------------------------------------------------------- */
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    /* -------------------------------------------------------
       BISPO - Recursiva + Loops Aninhados
       Movimento: 5 casas na diagonal (Cima + Direita)
       ------------------------------------------------------- */
    int casasBispo = 5;

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    /* -------------------------------------------------------
       RAINHA - Recursiva
       Movimento: 8 casas para a Esquerda
       ------------------------------------------------------- */
    int casasRainha = 8;

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    /* -------------------------------------------------------
       CAVALO - Recursivo
       Movimento em "L": 2 casas para Cima + 1 casa para Direita

       A função moverCavalo recebe os dois contadores separados.
       Ela esgota primeiro os passos verticais (Cima) e depois
       os horizontais (Direita), usando recursão para avançar
       cada passo individualmente.
       ------------------------------------------------------- */

    /* Passos verticais do "L" (sempre 2 para o Cavalo) */
    int passosVerticaisCavalo = 2;

    /* Passos horizontais do "L" (sempre 1 para o Cavalo) */
    int passosHorizontaisCavalo = 1;

    printf("Movimento do Cavalo:\n");
    moverCavalo(passosVerticaisCavalo, passosHorizontaisCavalo);

    printf("\n");

    return 0;
}
