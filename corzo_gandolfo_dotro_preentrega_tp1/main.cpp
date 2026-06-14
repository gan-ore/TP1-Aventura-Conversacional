// Corzo
// Gandolfo
// Dotro
// El Faro de los Condenados - Juego Interactivo en C++

#include <iostream>
#include <string>
#include <cstdlib>      //Esta libreria la vamos a usar para limpiar la consola.
using namespace std;

// Función para hacer pausa y limpiar la pantalla
void pausaYLimpia()
{
    cout << "\nPresiona ENTER para continuar";
    cin.ignore();           // Ignora el salto de línea anterior
    cin.get();              // Espera a que se presione ENTER
    system("clear");        // Limpia la pantalla
}

int main()
{
    // Variables para el menú
    int opcionMenu;
    int opcionJuego;

    // Variables de estado del jugador
    bool tieneLinterna;
    bool tieneLlave;
    bool tieneMapa;
    bool sigueVivo;

    // Variable para la vida del jugador
    float vida;

    // Variable para almacenar el nombre del capitán
    string nombre;

    // Bucle principal del programa - Menú infinito
    while(true)
    {
        cout << "\n=====================================================\n";
        cout << "            EL FARO DE LOS CONDENADOS\n";
        cout << "=====================================================\n";
        cout << "1. Jugar\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n";
        cout << "\nOpción: ";
        cin >> opcionMenu;
        system("clear");

        // Switch para manejar las opciones del menú principal
        switch(opcionMenu)
        {
            case 1:
            {
                // Inicializar variables de estado para una nueva partida
                tieneLinterna = false;
                tieneLlave = false;
                tieneMapa = false;
                sigueVivo = true;
                vida = 100.0;

                cout << "\nCapitán, ¿Cuál es tu nombre?\n";
                cin >> nombre;

                // Pequeña introducción narrativa
                cout << "\n=====================================================\n";
                cout << "            INICIANDO LA AVENTURA...\n";
                cout << "=====================================================\n\n";
                pausaYLimpia();


                // Introducción del juego
                cout << "\n\nUna tormenta obliga a tu barco a buscar refugio.\n";
                cout << "La Isla Prohibida aparece frente a ti.\n";
                cout << "Las leyendas hablan del tesoro de Los Piratas Marplatenses.\n";

                // Arte ASCII del mar y barcos
                cout << R"(
                
         ,-'-.     _.,                         ,-'-.     _.,
       . (    '("'-'  ').                    . (    '("'-'  ').
    ( ' ((  |.      )\/( )                ( ' ((  |.      )\/( )
     '(  )) | () |" |  | ')                '(  )) | () |" |  | ')
        ( . ,-. ,-.. __.)                    ( . ,-. ,-.. __.)
          /)  /  ' /                           /)  /  ' /
         /   /) / /                           /   /) / / 
                
  
                
                               |    |    |
                              )_)  )_)  )_)
                             )___))___))___)\
                            )____)____)_____)\\
                          _____|____|____|____\\\__
                 ---------\                   /------------
                   ^^^^^ ^^^^^^^^^^^^^^^^^^^^^          ^^^^^
               ^^      ^^^^      ^^^^     ^^^^^    ^^^^^^
                   ^^^       ^^^^       ^^^^^    ^^
                        
)";
                // Primera decisión importante del juego
                cout << "\n¿Qué desea hacer?\n";
                cout << "1. Explorar la playa\n";
                cout << "2. Explorar la cueva\n";
                cout << "3. Explorar el bosque\n";
                cout << "Opcion: ";
                cin >> opcionJuego;

                // Rama 1: Explorar la playa
                if(opcionJuego == 1)
                {
                    tieneLinterna = true;
                    cout << "\nEncontras una linterna entre los restos de una barcasa vieja y rota, medio tapada por la arena.\n";
                    cout << "\n1. Buscar más objetos\n";
                    cout << "2. Continuar\n";
                    cin >> opcionJuego;

                    if(opcionJuego == 1)
                    {
                        tieneMapa = true;
                        cout << "\nTambién encontras un mapa antiguo en un viejo bolso de piel de foca\n";
                    }
                }
                // Rama 2: Explorar la cueva
                else if(opcionJuego == 2)
                {
                    cout << "\nLa cueva esta llena de huesos.\n";
                    cout << "Escuchas pasos arrastrandose en la oscuridad.\n";

                    cout << "\n1. Encender una antorcha\n";
                    cout << "2. Avanzar en la oscuridad\n";
                    cout << "Opcion: ";
                    cin >> opcionJuego;

                    // Subrama 2a: Encender antorcha
                    if(opcionJuego == 1)
                    {
                        cout << "\nLa luz ilumina una camara oculta.\n";
                        cout << "Sobre un viejo esqueleto encontras una llave oxidada.\n";

                        tieneLlave = true;
                    }
                    // Subrama 2b: Avanzar a oscuras
                    else
                    {
                        cout << "\nAvanzas lentamente...\n";
                        cout << "\nEscuchas un gruñido detras de vos.\n";
                        cout << "\nUn pirata zombi emerge de las sombras.\n";

                        // Arte ASCII del zombi
                        cout << R"(

                                .+**+:                                    
                              =%%#++*%#+                                  
                           :*%@@@%%%#%@%%##+                              
                         .-%@@@@%##+**@@@*-                               
                              *@%**+=#%%#+                                
                    -=*#-  #%%@@@%%*##@@%:..    *=.                       
                   *#%%%##=*##%@#@%@%%#=*####**%%%#+                      
                   =. #@%@@%%@@@@##*++#%#%@%*%%@%*+==                     
                      .+@@%+%@@#%#++*+##%@@@%@@@%+ :                      
                        .:  +@%#*#%*=**%%@%.:-%*=  :                       
                            +%%%%=#%%#@@%@#   -.   :                      
                            %#@@*+=*%%@@@%%-                              
                           @%@@@%%*#%%%@@@%%*                             
                          *@@@@@@%%@%@%%@@@%#.                            
                         *@%@%%**%%%%@%%%@@%%*                            
                        *%%@@%%%#%%%%%@%#@%@%##                           
                       :%%@@%##%%@@@@%%%%%%@@%%#:                         
                       :#*:@###%@@*-*%%#*#%%==#=.                         
                       +- *%**%%+ .  =%%##%#  --                          
                          #@%%%%:    :+@%#%*                              
                         :%@%@%+      =%@%#%+                             
                         -@@@%%+        *@%+                              
                          #@%%*.         %%+                              
                         .%@%%           .#+                              
                        =%##%%.           +*                              
                      -@%%%#.             :#            

)";

                        cout << "\n1. Correr\n";
                        cout << "2. Enfrentarlo con una espada\n";
                        cout << "Opción: ";
                        cin >> opcionJuego;

                        if(opcionJuego == 1)
                        {
                            vida -= 25;

                            cout << "\nLogras escapar de la cueva.\n";
                            cout << "Pero el zombi alcanza a herirte.\n";
                            cout << "Vida: " << vida << endl;
                        }
                        else
                        {
                            vida = 0;
                            sigueVivo = false;

                            cout << "\nIntentas luchar, pero el zombi es demasiado fuerte.\n";
                            cout << "\nGAME OVER\n";
                        }
                    }
                }
                // Rama 3: Explorar el bosque
                else
                {
                    cout << "\nEn el bosque observas piratas zombis caminando.\n";
                    tieneMapa = true;
                    vida -= 10;
                    cout << "Obtienes un mapa pero sufres heridas.\n";
                    cout << "Vida: " << vida << endl;
                }

                // Verificar si el jugador murió en la primera fase
                if(sigueVivo == false)
                {
                    pausaYLimpia();
                    break;
                }

                // Viaje hacia el faro - Bucle for para simular pasos
                cout << "\nTe dirigis hacia el faro...\n";

                for(int paso = 1; paso <= 10; paso++)
                {
                    cout << "Paso " << paso << endl;
                }

                cout << "\nEn el camino encuentras un campamento abandonado.\n";

                // Búsqueda de llave si no la tienes
                if(tieneLlave == false)
                {
                    cout << "1. Revisar el campamento\n";
                    cout << "2. Ignorarlo\n";
                    cin >> opcionJuego;

                    if(opcionJuego == 1)
                    {
                        tieneLlave = true;
                        cout << "\nEncuentras una llave escondida.\n";
                    }
                }

                // Llegada al faro
                cout << "\nLlegas al viejo faro.\n";

                // Arte ASCII del faro
                cout << R"(

  _^_
  |@|
 =====
  #::
  #::
  #::
  #::
  #::
  #::
###::^-..
         ^ ~ ~~ ~~ ~ ~ ~
          \~~ ~~ ~ ~  ~~~~~

)";

                // Lógica de entrada al faro - necesitas la llave
                if(tieneLlave == true)
                {
                    cout << "\nAbrís la puerta del faro.\n";
                }
                else
                {
                    cout << "\nLa puerta esta cerrada.\n";
                    cout << "No puedes entrar.\n";
                    cout << "\nFINAL: ATRAPADO FUERA DEL FARO\n";
                    pausaYLimpia();
                    break;
                }

                // Subida por los pisos del faro - Bucle for
                cout << "\nSubiendo los pisos del faro...\n";

                for(int piso = 1; piso <= 5; piso++)
                {
                    cout << "Piso " << piso << endl;
                }

                // Rama según si tienes linterna
                if(tieneLinterna == true)
                {
                    cout << "\nLa linterna ilumina garabatos extraños grabados en las paredes.\n";
                }
                else
                {
                    cout << "\nTodo esta oscuro.\n";
                    cout << "Escuchas pasos y cadenas arrastrandose.\n";

                    cout << "\n1. Avanzar con cuidado\n";
                    cout << "2. Buscar una fuente de luz\n";
                    cout << "Opcion: ";
                    cin >> opcionJuego;

                    if(opcionJuego == 1)
                    {
                        vida -= 25;

                        cout << "\nTropiezas varias veces entre los escombros.\n";
                        cout << "Vida: " << vida << endl;
                    }
                    else
                    {
                        cout << "\nEncuentras una vieja antorcha apoyada contra la pared.\n";
                        cout << "La enciendes y ahora puedes ver mejor.\n";

                        tieneLinterna = true;
                    }
                }

                // Verificar si el jugador aún tiene vida
                if(vida <= 0)
                {
                    cout << "\nUn pirata zombi te sorprende y te ataca.\n";
                    cout << "\nGAME OVER\n";
                    pausaYLimpia();
                    break;
                }

                // Decisión final - dos caminos hacia el tesoro
                cout << "\nEn la cima encuentras una puerta secreta.\n";
                cout << "\nLa puerta tiene dos caminos.\n";
                cout << "1. Abrir la puerta de piedra\n";
                cout << "2. Seguir las marcas dejadas por los zombis\n";
                cout << "Opcion: ";
                cin >> opcionJuego;

                // Final 1: Puerta de piedra (necesitas llave)
                if(opcionJuego == 1)
                {
                    if(tieneLlave == true)
                    {
                        // Arte ASCII del tesoro
                        cout << R"(

      ___________________
     /__________________/|
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | /
    |__________________|/

)";

                        cout << "\nHas encontrado una parte del tesoro.\n";
                        cout << "\nVICTORIA\n";
                        pausaYLimpia();
                    }
                    else
                    {
                        cout << "\nLa puerta no se abre.\n";
                        cout << "\nGAME OVER\n";
                        pausaYLimpia();
                    }
                }
                // Final 2: Seguir marcas de zombis (necesitas mapa)
                else
                {
                    if(tieneMapa == true)
                    {
                        // Arte ASCII del tesoro
                        cout << R"(

      ___________________
     /__________________/|
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | |
    | $$$$$$$$$$$$$$$$$ | /
    |__________________|/

)";

                        cout << "\nEl mapa coincide con las marcas de los zombis.\n";
                        cout << "\nFINAL VERDADERO\n";
                        cout << nombre << ", has encontrado el tesoro completo de Los Piratas Marplatenses.\n";
                        pausaYLimpia();
                    }
                    else
                    {
                        cout << "\nLas marcas te conducen a una emboscada.\n";

                        // Arte ASCII del zombi
                        cout << R"(

                                .+**+:                                    
                              =%%#++*%#+                                  
                           :*%@@@%%%#%@%%##+                              
                         .-%@@@@%##+**@@@*-                               
                              *@%**+=#%%#+                                
                    -=*#-  #%%@@@%%*##@@%:..    *=.                       
                   *#%%%##=*##%@#@%@%%#=*####**%%%#+                      
                   =. #@%@@%%@@@@##*++#%#%@%*%%@%*+==                     
                      .+@@%+%@@#%#++*+##%@@@%@@@%+ :                      
                        .:  +@%#*#%*=**%%@%.:-%*=  :                       
                            +%%%%=#%%#@@%@#   -.   :                      
                            %#@@*+=*%%@@@%%-                              
                           @%@@@%%*#%%%@@@%%*                             
                          *@@@@@@%%@%@%%@@@%#.                            
                         *@%@%%**%%%%@%%%@@%%*                            
                        *%%@@%%%#%%%%%@%#@%@%##                           
                       :%%@@%##%%@@@@%%%%%%@@%%#:                         
                       :#*:@###%@@*-*%%#*#%%==#=.                         
                       +- *%**%%+ .  =%%##%#  --                          
                          #@%%%%:    :+@%#%*                              
                         :%@%@%+      =%@%#%+                             
                         -@@@%%+        *@%+                              
                          #@%%*.         %%+                              
                         .%@%%           .#+                              
                        =%##%%.           +*                              
                      -@%%%#.             :#            

)";

                        cout << "\nLos zombis te rodean.\n";
                        cout << "\nGAME OVER\n";
                        pausaYLimpia();
                    }
                }

                break;
            }

            case 2:
                // Mostrar instrucciones del juego
                cout << "\n================ INSTRUCCIONES ================\n";
                cout << "Ingresa el numero de cada opcion.\n";
                cout << "Tus decisiones afectan la historia.\n";
                cout << "Busca objetos utiles como la llave, el mapa y la linterna.\n";
                cout << "Llega a la cima del faro y encuentra el tesoro.\n";
                cout << "Hay varios finales posibles.\n";
                pausaYLimpia();
                break;
                
            case 3:
                // Salir del programa
                cout << "\nHasta luego.\n";
                return 0;

            default:
                // Opción inválida en el menú
                cout << "\nOpcion invalida.\n";
        }
    }

    return 0;
}
