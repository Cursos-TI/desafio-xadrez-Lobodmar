#include <stdio.h>

int main(void) {

    int passos_torre  = 5;  
    int passos_bispo  = 5;  
    int passos_rainha = 8;  

  
    printf("Movimento da Torre (for): %d casas para a direita\n", passos_torre);
    for (int i = 1; i <= passos_torre; i++) {
       
        printf("Direita\n");
    }
    printf("\n");

   
    printf("Movimento do Bispo (while): %d casas na diagonal para cima e à direita\n", passos_bispo);
    int contador_bispo = 0;
    while (contador_bispo < passos_bispo) {
       
        printf("Cima Direita\n");
        contador_bispo = contador_bispo + 1; 
    }
    printf("\n");

  
    printf("Movimento da Rainha (do-while): %d casas para a esquerda\n", passos_rainha);
    int contador_rainha = 0;
    if (passos_rainha > 0) {
       
        do {
            printf("Esquerda\n");
            contador_rainha = contador_rainha + 1;
        } while (contador_rainha < passos_rainha);
    }

    return 0;
}

