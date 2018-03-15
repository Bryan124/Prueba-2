#include "UtilidadesListaEnlazada.h"
#include <stdlib.h>
#include <iostream>
int arrcant = 0;
using namespace std;
void UtilidadesListaEnlazada::insertarFinal(Nodo **inicio, int valor1){
	Nodo *tmp = new Nodo();
	tmp->dato = valor1;

	if (*inicio == NULL) {
		*inicio = tmp;
	}
	else {
		Nodo *actual = *inicio;
		Nodo *anterior = NULL;

		while (actual != 0) {
			anterior = actual;
			actual = actual->sig;
		}
		anterior->sig = tmp;
		tmp->ant = anterior;
	}
}
void UtilidadesListaEnlazada::imprimirLista(Nodo **actual){
	if (*actual == 0) {
		return;
	}
	else {
		arrcant++;
		std::cout << (*actual)->dato << " ";
		imprimirLista(&(*actual)->sig);
	}
}
Nodo ** UtilidadesListaEnlazada::crearLista(int cant){
	Nodo *listx = NULL;
	int cantT = cant + 1;
	int cont = 1;
	while (cont <= cant) {
		int alea = rand() % cantT;
		insertarFinal(&listx, alea);
		cont++;
	}
	UtilidadesListaEnlazada::imprimirLista(&listx);
	
	return &listx;

}
void  UtilidadesListaEnlazada::ordernarLista(Nodo **actual) {
	int contArre = 0;
	int contArre2 = 0;
	int tmp;
	int* arreglo = new int[arrcant];
	while(*actual != 0) {
		tmp = (*actual)->dato;
		arreglo[contArre] = tmp;
		(*actual)->sig;
		contArre++;
	}
	for (int i = 1; i < arrcant; i++) {
		for (int j = 0; j < arrcant - 1; j++){
			if (arreglo[j] > arreglo[j + 1]) {
				int temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
	  }
	}
	Nodo *listy = NULL;
	while (contArre2 < arrcant) {
		insertarFinal2(&listy, arreglo[contArre2]);
	}
	UtilidadesListaEnlazada::imprimirLista(&listy);
}
void UtilidadesListaEnlazada::insertarFinal2(Nodo **inicio2, int valor1) {
	Nodo *tmp = new Nodo();
	tmp->dato = valor1;

	if (*inicio2 == NULL) {
		*inicio2 = tmp;
	}
	else {
		Nodo *actual = *inicio2;
		Nodo *anterior = NULL;

		while (actual != 0) {
			anterior = actual;
			actual = actual->sig;
		}
		anterior->sig = tmp;
		tmp->ant = anterior;
	}
}


