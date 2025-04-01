#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (utilizando o laço 'for')
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");  // Torre se move para a direita
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (utilizando o laço 'while')
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima\n");     // Movimenta-se para cima
        printf("Direita\n");  // Movimenta-se para a direita
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (utilizando o laço 'do-while')
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");  // Rainha se move para a esquerda
        k++;
    } while (k < 8);

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda (utilizando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {   // Laço externo para mover duas casas para baixo
        printf("Baixo\n");  // Movimento para baixo
    }
    
    int l = 0;
    while (l < 1) {  // Laço interno para mover uma casa para a esquerda
        printf("Esquerda\n");  // Movimento para a esquerda
        l++;
    }

    return 0;
}