#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int torre_movimento = 5;
    int bispo_movimento = 5;
    int rainha_movimento = 8;

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre_movimento; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < bispo_movimento) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainha_movimento);

    return 0;
}