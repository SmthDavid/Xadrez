#include <stdio.h>

void moverTorre(int casas) {
    if(casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

void moverBispo(int casasVertical, int casasHorizontal) {
    if(casasVertical == 0) return;
    for(int i = 0; i < casasHorizontal; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casasVertical - 1, casasHorizontal);
}

void moverRainha(int casas) {
    if(casas == 0) return; 
    printf("Cima\n");
    moverRainha(casas - 1); 
}

void moverCavalo() {
    int vertical, horizontal;
    
    for(vertical = 0; vertical < 2; vertical++) {
        printf("Cima\n");

        horizontal = 0;
        while(horizontal < 1) {
            printf("Direita\n");
            horizontal++;
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5); 
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5, 1); 
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8); 
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n")

    return 0;
}

