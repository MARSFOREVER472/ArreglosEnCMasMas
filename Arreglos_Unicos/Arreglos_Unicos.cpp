#include <iostream>

using namespace std;

int main()
{
    /*
    int contador = 0; // EMPIEZA EL CONTADOR INICIAL EN 10.
    string arreglo[2] = { "primero", "segundo" };

    while (contador < 2) // MIENTRAS QUE EL CONTADOR ES MENOR QUE 5...
    {
        cout << arreglo[contador] << endl; // IMPRIMIMOS UNA CASILLA DEL ARREGLO.
        contador++; // INCREMENTAMOS EL VALOR DEL CONTADOR EN 1 EN CADA VUELTA DEL BUCLE.
    }

    */

    int contador = 0; // EMPIEZA EL CONTADOR INICIAL EN 10.

    string arreglo[3] = { "primero", "segundo", "tercero" };

    while (contador < 3) // MIENTRAS QUE EL CONTADOR ES MENOR QUE 5...
    {
        cout << arreglo[contador] << endl; // IMPRIMIMOS UNA CASILLA DEL ARREGLO.
        contador++; // INCREMENTAMOS EL VALOR DEL CONTADOR EN 1 EN CADA VUELTA DEL BUCLE.
    }

    system("pause");
}

