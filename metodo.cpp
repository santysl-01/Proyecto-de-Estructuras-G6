struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Pila {
private:
    Nodo* top;

public:
    Pila() : top(nullptr) {}

    bool empty() const {
        return top == nullptr;  // Si no hay ningún nodo
    }

    void push(int valor) {
        Nodo* nuevo = new Nodo{valor, top};
        top = nuevo;
    }

    void pop() {
        if (!empty()) {
            Nodo* temp = top;
            top = top->siguiente;
            delete temp;
        }
    }
};
