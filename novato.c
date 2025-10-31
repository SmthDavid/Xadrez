#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
  
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int contBispo = 1;
    while (contBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contBispo++;
    }

    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contRainha = 1;
    do {
        printf("Esquerda\n");
        contRainha++;
    } while (contRainha <= casasRainha);

    return 0;
}

