#include <stdio.h>

/*
    ================================
            FUNÇÕES RECURSIVAS
    ================================
*/

/* -------- Torre --------
   A torre se move em linha reta.
   Aqui, 5 casas para a direita.
*/
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // condição de parada
    }

    printf("Direita\n"); 
    moverTorre(casasRestantes - 1); // chamada recursiva
}

/* -------- Rainha --------
   A rainha se move em qualquer direção.
   Aqui, 8 casas para a esquerda.
*/
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

/*
    -------- Bispo --------
    O bispo se move na diagonal.
    Movimento: 5 casas para cima e direita.

   */
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    // Loop externo = movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno = movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casasRestantes - 1); // chamada recursiva
}


/*
    ================================
        MOVIMENTO DO CAVALO
        loops aninhados complexos
    ================================
    
*/
void moverCavalo() {

    int movVertical = 2;   // duas casas para cima
    int movHorizontal = 1; // uma casa para direita

    printf("Movimento do Cavalo:\n");

    // Loop externo controla movimentos verticais e horizontais ao mesmo tempo
    for (int i = 0, v = movVertical, h = movHorizontal; i < 3; i++) {

        // Se ainda há movimentos verticais restantes
        if (v > 0) {

            // Loop interno para processar cada movimento vertical
            for (int passoV = v; passoV > 0; passoV--) {

                // Segurança: se já fizemos os 2 movimentos verticais, continue
                if (passoV < 0)
                    continue;  

                printf("Cima\n"); 
                v--;  

                // Se finalizou todos movimentos verticais, quebrar
                if (v == 0)
                    break;
            }
        }
        else if (h > 0) {

            // movimento horizontal
            for (int passoH = h; passoH > 0; passoH--) {

                // Movimento único de 1 casa
                printf("Direita\n");
                h--;

                // Quebra se acabou
                if (h == 0)
                    break;
            }
        }
        else {
            break; // encerra o loop externo
        }
    }
}


int main() {

    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    /*
        ================================
                    TORRE
        ================================
    */
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");


    /*
        ================================
                    BISPO
        ================================
    */
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");


    /*
        ================================
                    RAINHA
        ================================
    */
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");


    /*
        ================================
                    CAVALO
        ================================
    */
    moverCavalo();
    printf("\n");

    return 0;
}
