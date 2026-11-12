#include <stdio.h>
#include <string.h>

int main()
{
    char texto[] = "hello world";
    char *p = texto;

    int tam = strlen(texto);

    for(int i = 0; i < tam; i++) {
        printf("%c", *(p + i));
    }

    return 0;
}
