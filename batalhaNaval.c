#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    //Criação da matriz do tabuleiro
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}
    };

    //Criação dos navios
    int navio1[3] = {3,3,3}; // navio na vertical
    int navio2[3] = {3,3,3};


    int vertical_navio1 = 1;
    int horizontal_navio1 = 1;
    int vertical_navio2 = 2;
    int horizontal_navio2 = 5;


    //Impressão do tabuleiro
    printf("--- Tabuleiro Batalha Naval ---\n\n");
    printf("  ");

  
    for (char c = 'A'; c < 'A' + 10; c++) {
        printf(" %c ", c);
    }
    printf("\n");

    //Impressão dos navios

    if (vertical_navio1 <= 10)
    {
        if (horizontal_navio1 + 3 <= 10)
        {
           for (int i = 0; i < 3; i++) {
                tabuleiro[vertical_navio1 + i][horizontal_navio1] = navio1[i];
            } 
        } else {
            printf("Erro na impressão do navio por ultrapassar o limite do tabuleiro.");
        }
        
    } else {
            printf("Erro na impressão do navio por ultrapassar o limite do tabuleiro.");
        }


    if (horizontal_navio2 <= 10)
    {
        if (horizontal_navio2 + 3 <= 10)
        {
           for (int i = 0; i < 3; i++) {
                tabuleiro[vertical_navio2][horizontal_navio2 + i] = navio1[i];
            } 
        } else {
            printf("Erro na impressão do navio por ultrapassar o limite do tabuleiro.");
        }
        
    } else {
            printf("Erro na impressão do navio por ultrapassar o limite do tabuleiro.");
        }
    
    

    //Loop que imprime o tabuleiro
    for (int i = 0; i < 10; i++)
    {   
        //impressão de números para representar as linhas
        printf("%d", 1 + i);
        for (int j = 0; j < 10; j++)
        {
            printf("  %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Coordenadas do navio 1 : x = %d, y = %d\n", (horizontal_navio1 + 1), vertical_navio1 + 1);
    printf("Coordenadas do navio 2 : x = %d, y = %d", (horizontal_navio2 + 1), vertical_navio2 + 1);

    

    return 0;
}

