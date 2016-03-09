#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int
main(void)
{
    int linhas, coluna;
    int **matriz;
    int i, j;

    printf("quantas linhas?\n");
    scanf("%d", &linhas);

    printf("Informe quantas colunas?\n");
    scanf("%d", &coluna);

    printf("\n");

    // aloca a memoria para a matriz
    matriz = (int *) malloc(linhas * sizeof(int**));

    // laço que que aloca espaço para as colunas
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*)(malloc(coluna * sizeof(int)));
        for(j = 0; j < coluna; j++){
            matriz[i][j] = (int*) malloc(sizeof(int));
            matriz[i][j] = rand()%50;;
        }
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < coluna; j++){
            printf("Posicao da memoria %d : matriz[%d][%d] = %d\n", &matriz[i][j], i, j, matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;

}
