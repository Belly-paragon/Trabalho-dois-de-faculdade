#include <stdio.h>

int main() {
    // ==============================================
    // Movimentando o Cavalo no Tabuleiro de Xadrez
    // ==============================================
    //
    // O cavalo se moverá em "L":
    //   → Duas casas para BAIXO
    //   → Uma casa para a ESQUERDA
    //
    // Serão usados:
    //   - Um loop 'for' (obrigatório)
    //   - Um loop 'while' (ou do-while)
    //
    // O programa imprimirá a direção de cada movimento.

    // --------------------------------------------------
    // Definição das variáveis para o número de movimentos
    // --------------------------------------------------
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Linha em branco para separar dos movimentos anteriores
    printf("\n");

    // ===============================
    // Movimento para baixo (2 casas)
    // ===============================
    // Usando o loop 'for' para mover o cavalo para baixo.
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // ====================================
    // Movimento para a esquerda (1 casa)
    // ====================================
    // Usando o loop 'while' para mover o cavalo para a esquerda.
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    // Fim do programa
    return 0;
}

