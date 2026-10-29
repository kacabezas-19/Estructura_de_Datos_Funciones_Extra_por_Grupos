void ListaDoble::invertir() {
    if (cabeza == nullptr) {
        cout << "La lista esta vacia, no se puede invertir.\n";
        return;
    }

    Nodo* actual = cabeza;
    Nodo* temporal = nullptr;

    
    while (actual != nullptr) {
        temporal = actual->getAnterior();
        actual->setAnterior(actual->getSiguiente());
        actual->setSiguiente(temporal);
        actual = actual->getAnterior();
    }

    temporal = cabeza;
    cabeza = cola;
    cola = temporal;

    cout << "-> La lista se ha invertido correctamente.\n";
}