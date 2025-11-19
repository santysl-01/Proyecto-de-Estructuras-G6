#include "funciones.hpp"
#include <string>
Pila::Pila() : cuantos(0) {}

bool Pila::push(std::string dato)
{
    if (cuantos == capacidad)
        return false;
    datos[cuantos++] = dato;
    return true;
}

bool Pila::pop(std::string &dato)
{
    if (cuantos == 0)
        return false;
    dato = datos[--cuantos];
    return true;
}

bool Pila::top(std::string &dato) const
{
    if (cuantos == 0)
        return false;
    dato = datos[cuantos - 1];
    return true;
}

bool Pila::deshacer(Pila &pilaRehacer)
{
    std::string dato;
    if (cuantos == 0)
        return false;
    dato = datos[--cuantos];
    pilaRehacer.push(dato);
    return true;
}

bool Pila::rehacer(Pila &pilaRehacer)
{
    std::string dato;
    if (!pilaRehacer.top(dato))
        return false;
    pilaRehacer.pop(dato);
    push(dato);
    return true;
}

bool Pila::empty() const
{
    return cuantos == 0;
}
