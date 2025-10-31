#include <stdio.h>

int main() {
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\nMovimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    int j = 1;
    while(j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    int baixo, esquerda;
    for(baixo = 1; baixo <= 2; baixo++) {      
        printf("Baixo\n");
        esquerda = 1;
        while(esquerda <= 1) {                  
            printf("Esquerda\n");
            esquerda++;
        }
    }

    return 0;
}

