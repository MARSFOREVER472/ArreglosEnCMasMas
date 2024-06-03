# ArreglosEnCMasMas

- **_Hay algunos programas que requieren de recorrer cada uno de los índices o casillas de un arreglo, uno por uno de forma automática._** 
- **_Dos son los objetivos por los que podemos requerir esto, ya sea para consultar los elementos previamente guardados en el arreglo, o para guardar nuevos elementos en el arreglo._**
- **_Aunque podríamos hacerlo manualmente indicando de forma directa el índice de la casilla que vamos a consultar por ejemplo "```arreglo[3]=100;```" esto sólo es recomendable en arreglos pequeños, si vamos a manejar 20, 50, 100 o más elementos se requiere simplificar todo el proceso automatizándolo._**

## Código para recorrer un arreglo de forma automática:

```
#include <iostream>



using namespace std;

int main(){

int contador=0; // Empieza en 10

string arreglo[5]={"primer dato", "segundo texto", "80", "titulo", "fin"};



while (contador<5){ // Mientras sea menor que 5 (Explicacion abajo)

    cout << arreglo[contador] << endl; // Imprimimos una casilla del arreglo (Explicacion abajo)

    contador++; // Incrementamos el valor de contador en 1 con cada vuelta del bucle

}

system("pause");

}
```

![image](https://github.com/MARSFOREVER472/ArreglosEnCMasMas/assets/69094327/ade94c38-b59d-440a-971c-3e1cb3caa53e)

- **_El arreglo lo hemos creado de tipo string para que soporte texto y no solo números, el bucle while se ejecutará mientras contador sea menor que 5, quizá se pregunte ¿Por qué siendo que nuestro arreglo tiene 5 índices el bucle while lo condicionamos a ejecutarse mientras sea menor a 5?, bueno eso se debe a que los índices de nuestro arreglo van desde el 0 hasta el 4 porque los arreglos empiezan en 0 por eso nuestro contador lo hemos inicializado a 0, de 0 a 4 hay 5 números, así que nuestro bucle se ejecutará 5 veces._**
- **_El contador nos sirve para limitar la cantidad de veces que se ejecutará y también para indicar la casilla del arreglo que se imprimirá con ayuda de la función ```cout```._**

## Ingresar 20 números de forma automática en un arreglo y luego imprimirlos

**_Para este código utilizaremos como base el código anterior, pero añadiremos 20 números de forma automática recorriendo el arreglo con un bucle y luego otro bucle para consultar los valores guardados en él._**

```
#include <iostream>



using namespace std;



int main(){



int contador=0;

int arreglo[20]; // Creamos un arreglo de tipo numerico vacio



while (contador<20){

 arreglo[contador]=contador+1;// Explicacion abajo

    contador++;

}

contador=0; // Reseteamos el valor a 0 porque tras el bucle anterior su valor es 20

while (contador<20){

    cout << arreglo[contador] << endl;

    contador++;

}

system("pause");

}
```

![image](https://github.com/MARSFOREVER472/ArreglosEnCMasMas/assets/69094327/09924d54-8aa2-4739-a6a6-0d8c964e3f8c)

_Explicare acerca de esta sentencia "arreglo[contador]=contador+1;", con ella lo que hacemos es guardar en la casilla actual dependiendo del valor de "contador" un número que va a ser igual al valor actual de contador + 1 de esta forma si contador vale 0 entonces se guardara el valor 1, si contador vale 19 se guardará el valor 20, pero en la casilla 19 porque van desde el 0 hasta el 20, en resumen este Codigazo rellena el arreglo con 20 valores y los imprime luego._
