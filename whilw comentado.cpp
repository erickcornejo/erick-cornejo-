#include "iostream"  // Incluimos la biblioteca que nos deja imprimir en pantalla y recibir datos del usuario

using namespace std; // Esto nos permite usar 'cout' y 'cin' sin tener que poner 'std::' antes de cada uno

int main()  // Aqu� es donde empieza a ejecutarse nuestro programa
{
    int numero;  // Declaramos una variable llamada 'numero' que va a guardar el n�mero que el usuario ingrese

    cout << "Ingrese un numero ";  // Pedimos al usuario que ingrese un n�mero
    cin >> numero;  // Guardamos el n�mero que el usuario escribi� en la variable 'numero'

    // Iniciamos un bucle 'while' que sigue ejecut�ndose mientras 'numero' sea menor o igual a 100
    while(numero <= 100)
    {
        // Pedimos al usuario que ingrese otro n�mero
        cout << "Ingrese un numero ";
        // Guardamos el nuevo n�mero que el usuario ingrese en la variable 'numero'
        cin >> numero;
    }

    // Pausamos la consola para que no se cierre inmediatamente
    system("PAUSE");

    return 0;  // Indicamos que el programa termin� correctamente
}
