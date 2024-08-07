#include "iostream"  // Incluimos la biblioteca que nos deja imprimir en pantalla y recibir datos del usuario

using namespace std; // Esto nos permite usar 'cout' y 'cin' sin tener que poner 'std::' antes de cada uno

int main()  // Aquí es donde empieza a ejecutarse nuestro programa
{
    int numero;  // Declaramos una variable llamada 'numero' que va a guardar el número que el usuario ingrese

    cout << "Ingrese un numero ";  // Pedimos al usuario que ingrese un número
    cin >> numero;  // Guardamos el número que el usuario escribió en la variable 'numero'

    // Iniciamos un bucle 'while' que sigue ejecutándose mientras 'numero' sea menor o igual a 100
    while(numero <= 100)
    {
        // Pedimos al usuario que ingrese otro número
        cout << "Ingrese un numero ";
        // Guardamos el nuevo número que el usuario ingrese en la variable 'numero'
        cin >> numero;
    }

    // Pausamos la consola para que no se cierre inmediatamente
    system("PAUSE");

    return 0;  // Indicamos que el programa terminó correctamente
}
