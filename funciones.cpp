#include "funciones.hpp"

bool Pila::top(int &dato) const {
    if (cuantos == 0) {
        return false;  // pila vacía
    }
    dato = datos[cuantos - 1];  // copia el último elemento
    return true;  // había elemento
}