#include <stdio.h>

/* ============================
   Funções recursivas das peças
   ============================ */

// --- Torre: movimenta-se em linha reta (para cima)
void moverTorre(int casas) {
    if (casas == 0) return; // caso base da recursão
    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

// --- Bispo: movimenta-se em diagonais (aqui: cima e direita)
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0 || horizontais == 0) return; // caso base

    // Loop aninhado dentro da recursão:
    // externo: vertical, interno: horizontal
    for (int i = 1; i <= verticais; i++) {
        for (int j = 1; j <= horizontais; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // chamada recursiva reduzindo o número de passos
    moverBispo(verticais - 1, horizontais - 1);
}

// --- Rainha: combina movimento da torre e do bispo
void moverRainha(int casas) {
    if (casas == 0) return; // caso base
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1); // chamada recursiva
}

/* ============================
   Cavalo com loops complexos
   ============================ */

// Cavalo: movimento em “L” → duas casas para cima e uma para a direita
void moverCavalo() {
    int movVertical = 2;
    int movHorizontal = 1;

    printf("\n--- Movimento do Cavalo ---\n");

    // Loop externo controla o movimento vertical
    for (int i = 1, j = movVertical; i <= movVertical && j > 0; i++, j--) {
        printf("Cima\n");

        // Loop interno controla o movimento horizontal
        int k = 0;
        while (k < movHorizontal) {
            // Exemplo de uso de controle de fluxo
            if (i == 2 && k == 0) {
                printf("Direita\n");
                break; // encerra o loop interno após a casa final
            }
            k++;
        }
    }
}

/* ============================
   Função principal
   ============================ */

int main() {
    printf("--- Movimento da Torre ---\n");
    moverTorre(3); // três casas para cima

    printf("\n--- Movimento do Bispo ---\n");
    moverBispo(2, 2); // duas casas diagonais (cima + direita)

    printf("\n--- Movimento da Rainha ---\n");
    moverRainha(3); // três casas combinadas (cima + direita)

    moverCavalo(); // movimento em L (duas para cima e uma para direita)

    return 0;
}
