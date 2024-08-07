#include <iostream>  // Incluimos la biblioteca que nos permite usar 'cout' para imprimir en pantalla
using namespace std; // Esto nos permite usar 'cout' sin tener que escribir 'std::cout'

int main() {  // La función principal, donde empieza nuestro programa
    int array[6] = {10, 20, 30, 40, 50, 60};  // Creamos un array llamado 'array' que contiene 6 números

    // Un bucle 'for' que recorre cada elemento del array
    for (int i = 0; i < 6; i++)
        // Imprime el valor del elemento actual del array seguido de un espacio
        cout << array[i] << " ";

    cout << endl; // Imprime un salto de línea al final para que el texto siguiente aparezca en una nueva línea

    return 0; // Finaliza el programa correctamente
}
