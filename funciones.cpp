#include "funciones.hpp"
#include <string>

// Constructor: inicializa la pila vacia
//"cuantos" indica cuantos elementos hay actualmente

Pila::Pila() : cuantos(0) {}

// Inserta un elemento en la pila
// Si la pila ya esta llena (capacidad alcanzada), retorna false
bool Pila::push(std::string dato)
{
    if (cuantos == capacidad)
        return false;        // No se puede insertar más
    datos[cuantos++] = dato; // Guarda el dato y aumenta el contador
    return true;
}

// Extrae el ultimo elemento insertado
// Si la pila esta vacia,lanza false
bool Pila::pop(std::string &dato)
{
    if (cuantos == 0)
        return false;        // No hay elementos para extraer
    dato = datos[--cuantos]; // Se reduce el contador y obtiene el dato
    return true;
}

// Obtiene el ultimo elemento sin eliminarlo
// Si la pila esta vacia, retorna false
bool Pila::top(std::string &dato) const
{
    if (cuantos == 0)
        return false;
    dato = datos[cuantos - 1]; // Consulta el elemento superior, El ultimo elemento siempre está en el índice anterior a la cantidad
    return true;
}
// Función DESHACER
// Saca el ultimo cambio de esta pila y lo mueve a la pila de rehacer
bool Pila::deshacer(Pila &pilaRehacer)
{
    std::string dato;
    if (cuantos == 0)
        return false;        // Nada que deshacer
    dato = datos[--cuantos]; // Se quita el ultimo cambio
    pilaRehacer.push(dato);  // Ese cambio se guarda para poder rehacerlo
    return true;
}
// Función REHACER
// Recupera el ultimo cambio deshecho desde la pilaRehacer
// Y lo devuelve a la pila actual
bool Pila::rehacer(Pila &pilaRehacer)
{
    std::string dato;
    if (!pilaRehacer.top(dato))
        return false;      // Nada que rehacer
    pilaRehacer.pop(dato); // Se obtiene el ultimo cambio deshecho
    push(dato);            // Se vuelve a aplicar el cambio
    return true;
}

// Verifica si la pila está vacia
bool Pila::empty() const
{
    return cuantos == 0;
}
