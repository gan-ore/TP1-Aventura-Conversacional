//Corzo
//Gandolfo
//Dotro

#include <iostream>
using namespace std;

int main()
{
    int opcionMenu;
    int opcionJuego;

    bool tieneLinterna;
    float vida;

    string nombre;

    while(true)
    {
        cout << "\n=========================================\n";
        cout << "      EL FARO DE LOS CONDENADOS\n";
        cout << "=========================================\n";
        cout << "1. Jugar\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n";
        cout << "\nOpción: ";
        cin >> opcionMenu;

        switch(opcionMenu)
        {
            case 1:

                tieneLinterna = false;
                vida = 100.0;

                cout << "\nCual es tu nombre, capitan?\n";
                cin >> nombre;

                cout << "\nCapitan " << nombre << ", una tormenta te obliga a refugiarte en una isla.\n";

                cout << R"(

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~ TORMENTA ~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

                 /\
                /  \
               /____\
               | [] |
               |    |
               |____|
                  |
             ~~~~~~~~~

)";

                cout << "\nLlegas a una isla misteriosa.\n";
                cout << "1. Explorar la playa\n";
                cout << "2. Ir directo al faro\n";
                cout << "Opcion: ";
                cin >> opcionJuego;

                if(opcionJuego == 1)
                {
                    tieneLinterna = true;
                    cout << "\nEncontraste una linterna.\n";
                }
                else
                {
                    cout << "\nDecides ir directamente al faro.\n";
                }

                cout << "\nLlegas a la entrada del faro.\n";
                cout << "Todo esta oscuro.\n";

                if(tieneLinterna == true)
                {
                    cout << "\nEnciendes la linterna y encuentras una llave oxidada.\n";

                    cout << R"(

      ___________________
     /__________________/|
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | /
    |__________________|/

)";

                    cout << "\nFelicidades " << nombre << "!\n";
                    cout << "Has encontrado el tesoro perdido.\n";
                    cout << "\nVICTORIA\n";
                }
                else
                {
                    vida = 0;

                    cout << R"(

          .-.
         (o o)
         | O \
          \   \
           `~~~'

      PIRATA ZOMBIE

)";

                    cout << "\nLa oscuridad te impide ver al enemigo.\n";
                    cout << "El zombie te atrapa.\n";
                    cout << "Vida: " << vida << endl;

                    cout << "\nGAME OVER\n";
                }

                cout << "\nPresiona 0 para volver al menu: ";
                cin >> opcionJuego;

                break;

            case 2:

                cout << "\n========== INSTRUCCIONES ==========\n";
                cout << "Ingresa el numero de la opcion elegida.\n";
                cout << "Tus decisiones afectan la aventura.\n";
                cout << "Explora y encuentra el tesoro.\n";

                break;

            case 3:

                cout << "\nHasta luego.\n";
                return 0;

            default:

                cout << "\nOpción invalida.\n";
        }
    }

    return 0;
}