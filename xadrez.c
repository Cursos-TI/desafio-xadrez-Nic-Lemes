#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ================================
    // MOVIMENTO DA TORRE (FOR)
    // ================================
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ================================
    // MOVIMENTO DO BISPO (WHILE)
    // ================================
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ================================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // ================================
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    // ================================
    // MOVIMENTO DO CAVALO (FOR + WHILE)
    // ================================
    /*
        O cavalo deve se mover:
        - 2 casas para baixo
        - 1 casa para a esquerda

        Usaremos:
        → Loop externo FOR para as duas casas para baixo
        → Loop interno WHILE para a última casa à esquerda
    */

    printf("Movimento do Cavalo:\n");

    // Movimento em "L": duas casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Agora o movimento perpendicular: uma casa para a esquerda
    int contadorL = 0;
    while (contadorL < 1) {
        printf("Esquerda\n");
        contadorL++;
    }

    return 0;
}
