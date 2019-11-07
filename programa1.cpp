#include <iostream>

using namespace std;

int factorial(int n);

int main (int argc, char **argv) {

	/*
		Este programa genera una arreglo dinamico que para cada posicion tiene
		el valor del numero de la posicion en factorial.


	*/

	int* factoriales = NULL;
	int numero = 0;

	cout << "Escriba un numero" << endl;
	cin >> numero;

	factoriales = new int[numero];

	for (int i = 0; i < numero; i++) {
	/*
		Este for guarda en cada posicion del arreglo factoriales 
		el valor del factorial de cada posicion
	*/
		factoriales[i] = factorial(i);
	}

	for (int i = 0; i < numero; i++) {
	// Este for imprime lo que haya en el arreglo dinamico factoriales
		cout << factoriales[i] << endl;
	}

	delete [] factoriales;
	return 0;
}

int factorial(int n) {
	// Recibe un entero n y retorna el factorial de este numero
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}
