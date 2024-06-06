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
    */

    // REPASO GENERAL PARA TRABAJAR CON ARREGLOS EN C++...

    int variable1; // VARIABLE 1.
    int array1[10]; // VECTOR DE 10 NÚMEROS MEDIANTE UN ARREGLO.
    string array2[5]; // EL SIGUIENTE ARREGLO SE ENTREGA UNA CADENA DE CARACTERES.
   

    // ALGORITMO PARA REALIZAR TODO EL PROCEDIMIENTO AQUÍ ABAJO...

    array1[1] = 15; // SI DENTRO DE UN ARREGLO, EL VALOR 1 ES IGUAL A 15.
    array1[2] = 10; // SI DENTRO DE UN ARREGLO, EL VALOR 2 ES IGUAL A 10.
    array1[3] = array1[2] + array1[1]; // SUMA DE 2 VALORES DENTRO DE UN ARREGLO.
    array2[1] = "HOLA MUNDO"; // ENTREGA ESTE MENSAJE DENTRO DE ESTE ARREGLO.
    array2[0] = "UCN"; // DENTRO DEL MISMO ARREGLO, PERO EN OTRO VECTOR DESDE EL 0.

    cout << array1[3] << endl; // IMPRIME EL VALOR DEL ARREGLO 3, QUE ES IGUAL A 25.
    cout << array2[1] << endl; // IMPRIME UN STRING DENTRO DE ESTE ARREGLO.
    cout << array2[0] << endl; // IMPRIME OTRO STRING DENTRO DEL MISMO ARREGLO.

    system("pause");
    return 0;
}

