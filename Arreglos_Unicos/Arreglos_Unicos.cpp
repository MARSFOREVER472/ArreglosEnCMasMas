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

    /*
    
    int contador = 0; // EMPIEZA EL CONTADOR INICIAL EN 10.

    string arreglo[3] = { "primero", "segundo", "tercero" };

    while (contador < 3) // MIENTRAS QUE EL CONTADOR ES MENOR QUE 5...
    {
        cout << arreglo[contador] << endl; // IMPRIMIMOS UNA CASILLA DEL ARREGLO.
        contador++; // INCREMENTAMOS EL VALOR DEL CONTADOR EN 1 EN CADA VUELTA DEL BUCLE.
    }

    */

    int contador = 0;
    int array[20]; // CREAMOS UN ARREGLO DE TIPO NUMÉRICO VACÍO.

    while (contador < 20)
    {
        array[contador] = contador + 1; // SE GUARDA EN LA CASILLA ACTUAL DE UN ARREGLO...
        contador++; // ...DE ESTA FORMA, SI EL VALOR DEL CONTADOR ACTUAL DE UN ARREGLO ES 0, ENTONCES SE GUARDARÁ EN EL ARREGLO 1!
    }

    contador = 0; // RESETEAMOS EL VALOR A 0 PORQUE TRAS EL BUCLE ANTERIOR SU VALOR ES 20...

    while (contador < 20)
    {
        cout << array[contador] << endl; // IMPRIME POR CADA LÍNEA LOS VALORES DEL ARREGLO.
        contador++;
    }

    system("pause");
}

