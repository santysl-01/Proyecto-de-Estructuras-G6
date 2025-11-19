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
    return true;
}

bool Pila::top(int &dato) const
{
    if (cuantos == 0)
        return false;          // pila vacía
    dato = datos[cuantos - 1]; // copia el último elemento
    return true;               // había elemento
}

bool Pila::deshacer(Pila &pilaDeshacer)
{
    int dato;

    // Si no hay nada que deshacer, no se puede
    if (cuantos == 0)
        return false;

    // Sacamos el último elemento de la pila principal
    dato = datos[--cuantos];

    // Guardamos el dato removido en la pila de rehacer
    pilaDeshacer.push(dato);

    return true;
}

bool Pila::rehacer(Pila &pilaRehacer)
{
    int dato;

    // Si no hay acciones para rehacer, no se puede
    if (!pilaRehacer.top(dato))
        return false;

    // Quitamos el dato de la pila de rehacer
    pilaRehacer.pop(dato);

    // Lo regresamos a la pila principal
    push(dato);

    return true;
}
bool Pila::empty() const
{
    return cuantos == 0;
}