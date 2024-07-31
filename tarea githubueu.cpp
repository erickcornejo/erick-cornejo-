# include "iostream"

using namespace std;

int main()
{
    cout << "Ingrese la Opción a ejecutar(letras de la a a la c ): ";
    char opcion;
    cin >> opcion;

    switch(opcion)
    {
        case 'a': cout << "Usted ha seleccionado la opción a";
        break;
        case 'b': cout << "Usted ha seleccionado la opción b";
        break;
        case 'c': cout << "Usted ha seleccionado la opción c";
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }
    // system("PAUSE"); //Solo ponla si no te da error

    return 0;
}
