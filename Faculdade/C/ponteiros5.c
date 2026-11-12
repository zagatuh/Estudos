#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros = malloc(3 * sizeof(int));

    if(numeros == NULL) {
        return -1;
    }

    for(int i = 0; i < 3; i++) {
        scanf("%d", (numeros + i));
    }

    int *temp = realloc(numeros, 5 * sizeof(int));

    if(temp == NULL) {
        free(numeros);
        return -1;
    }

    numeros = temp;

    for(int i = 3; i < 5; i++) {
        scanf("%d", (numeros + i));
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(numeros + i));
    }

    free(numeros);

    return 0;
}
