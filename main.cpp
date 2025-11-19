#include <iostream>
#include "funciones.hpp"
using namespace std;

int main()
{
    Pila pilaDeshacer;
    Pila pilaRehacer;

    int opcion;

    do
    {
        cout << "\n--- MENU DE PRUEBA ---\n";
        cout << "1. Agregar palabra (push)\n";
        cout << "2. Deshacer (undo)\n";
        cout << "3. Rehacer (redo)\n";
        cout << "4. Ver ultima palabra (top)\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        string palabra;
        switch (opcion)
        {
        case 1:
            cout << "Ingresa una palabra o numero: ";
            cin >> palabra;

            pilaDeshacer.push(palabra);

            // Cada vez que agregamos algo, se limpia la pilaRedo
            while (!pilaRehacer.empty())
            {
                std::string basura;
                pilaRehacer.pop(basura);
            }

            cout << "Palabra agregada correctamente.\n";
            break;

        case 2:
            if (pilaDeshacer.deshacer(pilaRehacer))
                cout << "Deshacer realizado correctamente.\n";
            else
                cout << "No hay nada que deshacer.\n";
            break;

        case 3:
            if (pilaDeshacer.rehacer(pilaRehacer))
                cout << "Rehacer realizado correctamente.\n";
            else
                cout << "No hay nada que rehacer.\n";
            break;

        case 4:
            if (pilaDeshacer.top(palabra))
                cout << "Ultima palabra en la pila: " << palabra << "\n";
            else
                cout << "La pila esta vacia.\n";
            break;

        case 5:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion no valida.\n";
        }

    } while (opcion != 5);

    return 0;
}
