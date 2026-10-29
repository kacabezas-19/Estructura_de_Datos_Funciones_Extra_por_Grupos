
iterator: #if !defined(__Class_Diagram_1_Pila_h)
#define __Class_Diagram_1_Pila_h

class Pila
{
public:
   Pila(int capacidadInicial = 2);
   ~Pila();
   int* getDatos(void);
   void setDatos(int* newDatos);
   int getCapacidad(void);
   void setCapacidad(int newCapacidad);
   int getCima(void);
   void setCima(int newCima);
   void insertar(int valor);
   void eliminar(void);
   bool estaVacia(void);
   void imprimir(void);
   bool buscar(int objetivo);
   int contarElementos(void); // <--- Nueva función agregada

protected:
private:
   int* datos;
   int capacidad;
   int cima;

   void redimensionar(void);
};

#endif