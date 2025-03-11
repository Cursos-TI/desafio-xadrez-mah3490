#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (usando while)
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima Direita\n");
        casasBispo++;
    }

    // Movimento da Rainha (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}