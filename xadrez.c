#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deverá percorrer
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ================================
    // MOVIMENTO DA TORRE (FOR)
    // ================================
    // A torre se movimenta em linha reta.
    // Aqui, vamos simular 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ================================
    // MOVIMENTO DO BISPO (WHILE)
    // ================================
    // O bispo se movimenta apenas na diagonal.
    // Vamos simular 5 casas para cima e direita.
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
    // A rainha se move em todas as direções.
    // Aqui vamos simular 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
