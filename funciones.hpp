#ifndef funciones_hpp
#define funciones_hpp

class Pila
{
    static const int capacidad = 100;
    int datos[capacidad];
    int cuantos;

public:
    Pila() : cuantos(0) {}

    bool top(int &dato) const;
    bool push(int dato);
    bool pop(int &dato);
    bool empty() const;

};

#endif
