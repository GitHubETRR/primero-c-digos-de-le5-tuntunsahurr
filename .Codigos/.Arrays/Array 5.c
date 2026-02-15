#include <stdio.h>
#define N 5

int productoEscalar(int vecA[], int vecB[], int n) {
    int resultado = 0;
    for (int i = 0; i < n; i++) {
        resultado += vecA[i] * vecB[i];
    }
    return resultado;
}

int main() {
    int A[N], B[N];
    int resultado;

    for (int i = 0; i < N; i++) {
        printf("Ingresá el valor %d del vector A: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("Ingresá el valor %d del vector B: ", i + 1);
        scanf("%d", &B[i]);
    }

    printf("Vector A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: %d\n", i + 1, A[i]);
    }
    
    printf("Vector B:\n");
    for (int i = 0; i < N; i++) {
        printf("B[%d]: %d\n", i + 1, B[i]);
    }

    resultado = productoEscalar(A, B, N);

    printf("El producto escalar de los vectores A y B es: %d\n", resultado);

    return 0;
}
