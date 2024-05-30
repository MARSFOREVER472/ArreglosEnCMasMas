#include <iostream>

using namespace std;

int main()
{
    int contador = 0; // EMPIEZA EL CONTADOR INICIAL EN 10.
    string arreglo[5] = { "primero", "segundo", "tercero", "cuarto", "quinto" };

    while (contador < 5) // MIENTRAS QUE EL CONTADOR ES MENOR QUE 5...
    {
        cout << arreglo[contador] << endl; // IMPRIMIMOS UNA CASILLA DEL ARREGLO.
        contador++; // INCREMENTAMOS EL VALOR DEL CONTADOR EN 1 EN CADA VUELTA DEL BUCLE.
    }

    system("pause");
}

