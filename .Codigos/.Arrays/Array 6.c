#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void CargarVector(int vec[], int n) {
    for (int i = 0; i < n; i++) {
        vec[i] = rand() % 100; // números aleatorios del 0 al 99
    }
}

void InvertirVector(int vec[], int n){
    int A, B;
    for (A = 0, B = n-1; A < B; A++, B--) {
        int aux = vec[A];
        vec[A] = vec[B];
        vec[B] = aux;
    }
}

void MostrarVector(int vec[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

int main() {
    printf("--------Bienvenido a mi codigo--------\n");
    srand(time(NULL));

    int vector[N];

    CargarVector(vector, N);

    printf("Vector original:\n");
    MostrarVector(vector, N);

    InvertirVector(vector, N);

    printf("El vector invertido es:\n");
    MostrarVector(vector, N);

    return 0;
}
