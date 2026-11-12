#include <stdio.h>

void triplicar(int *numero)
{
    *numero = *numero * 3;
}

int main()
{
    int valor = 5;

    triplicar(&valor);

    printf("%d\n", valor);

    return 0;
}
