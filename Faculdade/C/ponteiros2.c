#include <stdio.h>

int main()
{
    int numeros[5] = {10, 20, 30, 40, 50};

    int *p = &numeros[0];

    for(int i = 0; i < 5; i++) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
