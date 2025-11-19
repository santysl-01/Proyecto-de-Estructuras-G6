#include <iostream>
#include "funciones.hpp"
using namespace std;

int main()
{
    Pila pilaDeshacer; // Pila para acciones realizadas
    Pila pilaRehacer;  // Pila para acciones deshechas

    int opcion;
    int numero;

    do
    {
        cout << "\n--- MENU DE PRUEBA ---\n";
        cout << "1. Agregar número (push)\n";
        cout << "2. Deshacer (undo)\n";
        cout << "3. Rehacer (redo)\n";
        cout << "4. Ver último número (top)\n";
        cout << "5. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingresa un número: ";
            cin >> numero;

            pilaDeshacer.push(numero);

            // Cada vez que agregamos algo, se limpia la pilaRedo
            while (!pilaRehacer.empty())
            {
                int basura;
                pilaRehacer.pop(basura);
            }

            cout << "Número agregado correctamente.\n";
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
            if (pilaDeshacer.top(numero))
                cout << "Último número en la pila: " << numero << "\n";
            else
                cout << "La pila está vacía.\n";
            break;

        case 5:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opción no válida.\n";
        }

    } while (opcion != 5);

    return 0;
}
