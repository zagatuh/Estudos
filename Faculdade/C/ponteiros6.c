#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz = malloc(3 * sizeof(int *));

    if(matriz == NULL) {
        return -1;
    }

    for(int i = 0; i < 3; i++) {
        matriz[i] = malloc(4 * sizeof(int));

        if(matriz[i] == NULL) {
            for(int j = 0; j < i; j++) {
                free(matriz[j]);
            }

            free(matriz);
            return -1;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("\n");

        for(int j = 0; j < 4; j++) {
            printf("%02d ", matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
