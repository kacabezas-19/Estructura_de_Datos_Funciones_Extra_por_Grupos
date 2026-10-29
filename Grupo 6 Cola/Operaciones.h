#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "Nodo.h"

void insertar(Nodo*& frente, Nodo*& fin, int valor);
void eliminar(Nodo*& frente, Nodo*& fin);
bool buscar(const Nodo* frente, int valor);
void imprimir(const Nodo* frente);
int sumarElementos(const Nodo* frente); // <--- Nueva función para sumar los elementos

#endif
