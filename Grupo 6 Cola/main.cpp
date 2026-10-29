#include <iostream>
#include "Operaciones.h"
using namespace std;

int main() {
    Nodo* frente = nullptr;
    Nodo* fin = nullptr;

    // Datos fijos para observar el comportamiento.
    cout << "Insertar 10, 20 y 30:\n";
    insertar(frente, fin, 10);
    insertar(frente, fin, 20);
    insertar(frente, fin, 30);
    imprimir(frente);

    // Probando la función de sumar elementos
    cout << "Suma total de los elementos: " << sumarElementos(frente) << endl;

    cout << "\nBuscar 20: ";
    if (buscar(frente, 20)) {
        cout << "encontrado\n";
    } else {
        cout << "no encontrado\n";
    }

    cout << "Eliminar el primero (10):\n";
    eliminar(frente, fin);
    imprimir(frente);

    // Probando la suma después de eliminar un elemento
    cout << "Suma total actual: " << sumarElementos(frente) << endl;

    // Liberar todos los nodos antes de finalizar.
    while (frente != nullptr) {
        eliminar(frente, fin);
    }
    imprimir(frente);
    return 0;
}
