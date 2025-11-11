#ifndef funciones_hpp
#define funciones_hpp

class Pila {
    static const int capacidad = 100;//la secuencia estatica
    int datos[capacidad];// el arreglo estatico
    int cuantos;// es un contador que va incrementar cada vez que se haga push

public:
    Pila() : cuantos(0) {}//constructor que inicia en cero la pila
    bool top(int &dato) const;
};

#endif