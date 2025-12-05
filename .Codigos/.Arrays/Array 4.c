#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void maximoMinimo(int vec[], int resultados[]) {
    int max = vec[0];
    int min = vec[0];

    for (int i = 1; i < N; i++) {
        if (vec[i] > max) max = vec[i];
        if (vec[i] < min) min = vec[i];
    }

    resultados[0] = max;
    resultados[1] = min;
}

void mostrarPosicionesMaximo(int vec[], int max) {
    printf("El valor máximo es %d y aparece en las posiciones: ", max);
    for (int i = 0; i < N; i++) {
        if (vec[i] == max) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int vec[N];
    int resultados[2];

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        vec[i] = 10 + rand() % 31;
    }
    
    for (int i = 0; i < N; i++) {
        printf("Vector %d es %d \n",i + 1, vec[i]);
    }
    printf("\n");

    maximoMinimo(vec, resultados);

    printf("Máximo: %d\n", resultados[0]);
    printf("Mínimo: %d\n", resultados[1]);

    mostrarPosicionesMaximo(vec, resultados[0]);

    return 0;
}
