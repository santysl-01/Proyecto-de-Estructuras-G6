#ifndef funciones_hpp
#define funciones_hpp
#include <string>
// Clase Pila
// Implementa una estructura de pila LIFO (Last In - First Out explicado en clase)
// Almacena datos de tipo string y permite operaciones como push, pop, consultar el elemento superior (top) y funcionalidades de undo/redo.
class Pila
{
    // Capacidad máxima de la pila, Se utiliza debido a que es proyecto simple y no necesitara de gestion de memoria dinamica.
    // Al ser "static const", el tamaño es fijo y no cambia en ejecución.
    static const int capacidad = 100;
    // Arreglo estatico donde se guardan los elementos.
    std::string datos[capacidad];
    int cuantos;

public:
    // Constructor inicia la pila vacía cuantos = 0
    Pila();
    // Consulta el ultimo elemento insertado sin eliminarlo
    // Retorna true si existe un elemento, false si está vacia
    bool top(std::string &dato) const;
    // Inserta un nuevo elemento en la pila
    // Retorna false si la pila está llena
    bool push(std::string dato);
    // Elimina y retorna el ultimo elemento insertado
    // Retorna false si la pila está vacia
    bool pop(std::string &dato);
    // Deshacer:
    // Mueve el ultimo elemento de esta pila a la pila de rehacer.
    // Devuelve false si no hay nada para deshacer.
    bool deshacer(Pila &pilaRehacer);
    // Rehacer:
    // Mueve el ultimo elemento desde la pila de rehacer a esta pila.
    // Devuelve false si no hay nada para rehacer.
    bool rehacer(Pila &pilaRehacer);
    // Verifica si la pila está vacía.
    bool empty() const;
};

#endif
