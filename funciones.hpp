#ifndef funciones_hpp
#define funciones_hpp
#include <string>
class Pila
{
    static const int capacidad = 100;
    std::string datos[capacidad];
    int cuantos;

public:
    Pila();

    bool top(std::string &dato) const;
    bool push(std::string dato);
    bool pop(std::string &dato);
    bool deshacer(Pila &pilaRehacer);
    bool rehacer(Pila &pilaRehacer);
    bool empty() const;
};

#endif
