#ifndef funciones_hpp
#define funciones_hpp

class Pila
{
    static const int capacidad = 100;
    int datos[capacidad];
    int cuantos;

public:
    Pila();
    bool top(int &dato) const;
    bool push(int dato);
    bool pop(int &dato);
    bool deshacer(Pila &piladeshacer);
    bool rehacer(Pila &pilaRehacer);
    bool empty() const;
};

#endif
