#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 50
#define MIN 10
#define MAX 20

void cargarVector(int vec[]);
void mostrarVector(int vec[]);
int contarMayor(int vec[]);

int main() {

	int numeros[LIM];

	srand(time(NULL));  

	cargarVector(numeros);
	mostrarVector(numeros);

	int repeticiones = contarMayor(numeros);

	printf("\nEl mayor valor se repite %d veces.\n", repeticiones);

	return 0;
}

void cargarVector(int vec[]) {

	for (int i = 0; i < LIM; i++) {
		vec[i] = rand() % (MAX - MIN + 1) + MIN;
	}
}

void mostrarVector(int vec[]) {

	printf("\nValores del vector:\n");

	for (int i = 0; i < LIM; i++) {
		printf("Vector %d es %d\n ",i+1 ,vec[i]);
	}

	printf("\n");
}

int contarMayor(int vec[]) {

	int mayor = vec[0];
	int contador = 0;

	for (int i = 1; i < LIM; i++) {
		if (vec[i] > mayor) {
			mayor = vec[i];
		}
	}

	for (int i = 0; i < LIM; i++) {
		if (vec[i] == mayor) {
			contador++;
		}
	}

	printf("\nEl mayor valor es: %d\n", mayor);

	return contador;
}
