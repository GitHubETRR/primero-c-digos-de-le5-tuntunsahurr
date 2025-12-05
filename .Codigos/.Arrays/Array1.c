#include <stdio.h>

int sumarvector(int vec[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += vec[i];
    }
    return suma;
}

int main() {
    int n;
    printf("Decime cuantos vectores queres que se sumen: ");
    scanf("%d", &n);

    int vect[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese elemento %d: ", i+1);
        scanf("%d", &vect[i]);
    }

    int resultado = sumarvector(vect, n);
    printf("El resultado de la suma vectorial es: %d\n", resultado);

    return 0;
}
