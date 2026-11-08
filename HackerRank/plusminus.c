#include <stdio.h>

void plusMinus(int array[], int tamArray) {
    float contNeg = 0, contPos = 0, contZero = 0;

    for (int i = 0; i < tamArray; i++) {
        if (array[i] < 0)
            contNeg++;
        else if (array[i] == 0)
            contZero++;
        else
            contPos++;
    }

    printf("%.6f\n", contPos  / tamArray);
    printf("%.6f\n", contNeg  / tamArray);
    printf("%.6f\n", contZero / tamArray);
}

int main() {
    int tamArray;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamArray);

    int array[tamArray];

    for (int i = 0; i < tamArray; i++) {
        scanf("%d", &array[i]);
    }

    plusMinus(array, tamArray);

    return 0;
}
