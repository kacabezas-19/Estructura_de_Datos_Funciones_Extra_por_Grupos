
#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila(int capacidadInicial)
{
   capacidad = capacidadInicial;
   cima = -1;
   datos = new int[capacidad];
}

Pila::~Pila()
{
   delete[] datos;
}

void Pila::redimensionar(void)
{
   int nuevaCapacidad = capacidad * 2;
   int* nuevoArreglo = new int[nuevaCapacidad];

   for (int i = 0; i <= cima; i++) {
       *(nuevoArreglo + i) = *(datos + i);
   }

   delete[] datos;
   datos = nuevoArreglo;
   capacidad = nuevaCapacidad;
}

int* Pila::getDatos(void)
{
   return datos;
}

void Pila::setDatos(int* newDatos)
{
   datos = newDatos;
}

int Pila::getCapacidad(void)
{
   return capacidad;
}

void Pila::setCapacidad(int newCapacidad)
{
   capacidad = newCapacidad;
}

int Pila::getCima(void)
{
   return cima;
}

void Pila::setCima(int newCima)
{
   cima = newCima;
}

void Pila::insertar(int valor)
{
   if (cima + 1 == capacidad) {
       redimensionar();
   }
   cima++;
   *(datos + cima) = valor;
}

void Pila::eliminar(void)
{
   if (cima >= 0) {
       cima--;
   }
}

bool Pila::estaVacia(void)
{
   return cima < 0;
}

void Pila::imprimir(void)
{
   if (estaVacia()) return;

   int valorCima = *(datos + cima);
   cima--;
   cout << valorCima << " ";

   imprimir();

   cima++;
}

bool Pila::buscar(int objetivo)
{
   if (estaVacia()) return false;

   int valorCima = *(datos + cima);
   if (valorCima == objetivo) return true;

   cima--;
   bool encontrado = buscar(objetivo);

   cima++;
   return encontrado;
}

//NUEVA FUNCION
int Pila::contarElementos(void)
{
   return cima + 1;
}