#include <stdio.h>
#include <locale.h>

// Função recursiva para o movimento da Torre (movimento reto)
void mover_torre(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        mover_torre(movimento - 1);
    }
}

// Função recursiva para o movimento do Bispo (movimento diagonal)
void mover_bispo(int movimento_vertical, int movimento_horizontal) {
    if (movimento_vertical > 0 && movimento_horizontal > 0) {
        printf("Cima\n");
        printf("Direita\n");
        mover_bispo(movimento_vertical - 1, movimento_horizontal - 1);
    }
}

// Função recursiva para o movimento da Rainha (movimento reto e diagonal)
void mover_rainha(int movimento) {
    if (movimento > 0) {
        printf("Esquerda\n");
        mover_rainha(movimento - 1);
    }
}

// Função para o movimento do Cavalo com loops aninhados
void mover_cavalo() {
    // Loop externo: movimento vertical (2 casas para cima)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        
        // Loop interno: movimento horizontal (1 casa para a direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Definindo o número de casas para cada peça
    int torre_movimento = 5;
    int bispo_movimento = 5;
    int rainha_movimento = 8;

    // Movimento da Torre: 5 casas para a direita usando recursividade
    printf("Movimento da Torre:\n");
    mover_torre(torre_movimento);
    
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando recursividade
    printf("\nMovimento do Bispo:\n");
    mover_bispo(bispo_movimento, bispo_movimento);
    
    // Movimento da Rainha: 8 casas para a esquerda usando recursividade
    printf("\nMovimento da Rainha:\n");
    mover_rainha(rainha_movimento);
    
    // Movimento do Cavalo: 2 casas para cima e 1 para a direita usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}