# ArreglosEnCMasMas

- **_Hay algunos programas que requieren de recorrer cada uno de los índices o casillas de un arreglo, uno por uno de forma automática._** 
- **_Dos son los objetivos por los que podemos requerir esto, ya sea para consultar los elementos previamente guardados en el arreglo, o para guardar nuevos elementos en el arreglo._**
- **_Aunque podríamos hacerlo manualmente indicando de forma directa el índice de la casilla que vamos a consultar por ejemplo "```arreglo[3]=100;```" esto solo es recomendable en arreglos pequeños, si vamos a manejar 20, 50, 100 o más elementos se requiere simplificar todo el proceso automatizándolo._**

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

- El arreglo lo hemos creado de tipo string para que soporte texto y no solo números, el bucle while se ejecutará mientras contador sea menor que 5, quizá se pregunte ¿por que siendo que nuestro arreglo tiene 5 índices el bucle while lo condicionamos a ejecutarse mientras sea menor a 5?, bueno eso se debe a que los índices de nuestro arreglo van desde el 0 hasta el 4 porque los arreglos empiezan en 0 por eso nuestro contador lo hemos inicializado a 0, de 0 a 4 hay 5 números, así que nuestro bucle se ejecutará 5 veces.
- El contador nos sirve para limitar la cantidad de veces que se ejecutará y también para indicar la casilla del arreglo que se imprimirá con ayuda de la función cout.
