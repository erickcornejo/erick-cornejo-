# include "iostream"

using namespace std;

int main()
{
    cout << "Ingrese la Opci�n a ejecutar(letras de la a a la c ): ";
    char opcion;
    cin >> opcion;

    switch(opcion)
    {
        case 'a': cout << "Usted ha seleccionado la opci�n a";
        break;
        case 'b': cout << "Usted ha seleccionado la opci�n b";
        break;
        case 'c': cout << "Usted ha seleccionado la opci�n c";
        break;
        default: cout << "Usted ha ingresado una opci�n incorrecta";
    }
    // system("PAUSE"); //Solo ponla si no te da error

    return 0;
}
