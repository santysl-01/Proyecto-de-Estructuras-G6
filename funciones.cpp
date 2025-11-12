#include "funciones.hpp"

Pila::Pila() : cuantos(0) {}

bool Pila::push(int dato)
{
    if (cuantos == capacidad)
        return false; // pila llena
    datos[cuantos++] = dato;
    return true;
}

bool Pila::pop(int &dato)
{
    if (cuantos == 0)
        return false; // pila vacía
    dato = datos[--cuantos];
    return true; // se puede eliminar
}

bool Pila::top(int &dato) const
{
    if (cuantos == 0)
        return false;          // pila vacía
    dato = datos[cuantos - 1]; // copia el último elemento
    return true;               // había elemento
}
