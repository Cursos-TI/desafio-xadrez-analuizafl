#include <stdio.h>

//XADREZ

// Funções Recursivas (Nível Mestre)

// Movimento da Torre (recursivo)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento da Rainha (recursivo)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo (recursivo com loops aninhados)
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {       // movimento vertical
        for (int j = 0; j < 1; j++) {       // movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

// Movimento do Cavalo 

void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int v = 0; v < movimentosVerticais; v++) { // loop vertical
        printf("Baixo\n");
    }

    for (int h = 0; h < movimentosHorizontais; h++) { // loop horizontal
        printf("Direita\n");
    }
}

// Função principal

int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo (5 casas diagonal Cima-Direita):\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Cavalo (L - 2 para cima, 1 para a direita):\n");
    moverCavalo();
    printf("\n");

    return 0;
}