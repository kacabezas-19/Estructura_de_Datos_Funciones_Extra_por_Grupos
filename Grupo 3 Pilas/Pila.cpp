#include "Pila.h"
#include "Persona.h"

//constructor
Pila::Pila() {
  this->tope = nullptr;
  this->tamanio = 0; // Inicializamos el tamaño en 0[cite: 15]
}

//desctructor
Pila::~Pila(){
  while(this->tope!=nullptr){
    this->desapilar();
  }
}

//metodo ingresar
void Pila::apilar(const Persona &p) {
  Nodo *nuevo = new Nodo(p);
  nuevo->setSiguiente(this->tope);
  this->tope = nuevo;
  this->tamanio++; // Incrementamos el tamaño al apilar[cite: 15]
}

//metodo eliminar
void Pila::desapilar() {
  if (tope == nullptr) {
    std::cout << "\nPila vacia, no se puede desapilar" << std::endl;
    return;
  }
  Nodo *temp = this->tope;
  this->tope= this->tope->getSiguiente();
  std::cout<<"Desapilado con exito" << std::endl;
  delete temp;
  this->tamanio--; // Decrementamos el tamaño al desapilar[cite: 15]
}

//metodo imprimir
void Pila::imprimir() {
  Nodo *actual = this->tope;
  if (tope == nullptr) {
    std::cout << "\nPila vacia" << std::endl;
    return;
  }
  while (actual != nullptr) {
    Persona impr = actual->getDato();
    std::cout << "\nPersona: " << "\nNombre: " << impr.getNombre()
              << "\nApellido: " << impr.getApellido()
              << "\nCedula: " << impr.getCedula() << std::endl;
    actual = actual->getSiguiente();
  }
}

//metodo buscar
bool Pila::buscar(const std::string &cedula) {

  if (tope == nullptr) {
    std::cout << "La pila esta vacia. Por favor ingresar un Persona" << std::endl;
    return false;
  }
  Nodo *actual = this->tope;

  while (actual != nullptr) {
    Persona busc = actual->getDato();
    if (busc.getCedula()==cedula) {
      std::cout << "\nPersona: " << "\nNombre: " << busc.getNombre()
                << "\nApellido: " << busc.getApellido()
                << "\nCedula: " << busc.getCedula() << std::endl;
      return true;
    }
    actual = actual->getSiguiente();
    
  }
  std::cout<<"Persona con la cedula: " << cedula << " no encontrada" << std::endl;
  return false;
}

//metodo sizePila
int Pila::sizePila() {
  return this->tamanio;
}