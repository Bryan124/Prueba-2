#pragma once
#include <iostream>

using namespace std;
#ifndef UtilidadesListaEnlazada_H

#define UtilidadesListaEnlazada_H

typedef struct Nodo {
	int dato;
	Nodo *sig;
	Nodo *ant;
} Nodo;

class UtilidadesListaEnlazada {
public:
	static void insertarFinal(Nodo **, int);
	static Nodo ** crearLista(int); 
	static void insertarFinal2(Nodo **, int);
	static void ordernarLista(Nodo **);
	static void guardarLista(Nodo **, char *);

	static void imprimirLista(Nodo **actual);
};


#endif // !UtilidadesListaEnlazada_H
