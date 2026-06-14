//Corzo
//Gandolfo
//Dotro

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int opcionMenu;
    int opcionJuego;

    bool tieneLinterna;
    bool tieneLlave;
    bool tieneMapa;
    bool sigueVivo;

    float vida;

    string nombre;

    while(true)
    {
        cout << "\n=====================================================\n";
        cout << "            EL FARO DE LOS CONDENADOS\n";
        cout << "=====================================================\n";
        cout << "1. Jugar\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n";
        cout << "\nOpcion: ";
        cin >> opcionMenu;

        switch(opcionMenu)
        {
            case 1:
            {
                tieneLinterna = false;
                tieneLlave = false;
                tieneMapa = false;
                sigueVivo = true;
                vida = 100.0;

                cout << "\nCapitán, ¿cuál es tu nombre?\n";
                cin >> nombre;

                cout << "\nPreparando aventura...\n";

                for(int i = 0; i < 25; i++)
                {
                    cout << "#";
                }

                cout << "\n\nUna tormenta obliga a tu barco a buscar refugio.\n";
                cout << "La Isla Prohibida aparece frente a ti.\n";
                cout << "Las leyendas hablan del tesoro de Los Piratas Marplatenses.\n";

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

                cout << "\nQue deseas hacer?\n";
                cout << "1. Explorar la playa\n";
                cout << "2. Explorar la cueva\n";
                cout << "3. Explorar el bosque\n";
                cout << "Opcion: ";
                cin >> opcionJuego;

                if(opcionJuego == 1)
                {
                    tieneLinterna = true;
                    cout << "\nEncontras una linterna entre los restos de un naufragio.\n";

                    cout << "\n1. Buscar más objetos\n";
                    cout << "2. Continuar\n";
                    cin >> opcionJuego;

                    if(opcionJuego == 1)
                    {
                        tieneMapa = true;
                        cout << "\nTambién encontras un mapa antiguo.\n";
                    }
                }
else if(opcionJuego == 2)
{
    cout << "\nLa cueva esta llena de huesos.\n";
    cout << "Escuchas pasos arrastrandose en la oscuridad.\n";

    cout << "\n1. Encender una antorcha\n";
    cout << "2. Avanzar en la oscuridad\n";
    cout << "Opcion: ";
    cin >> opcionJuego;

    if(opcionJuego == 1)
    {
        cout << "\nLa luz ilumina una camara oculta.\n";
        cout << "Sobre un viejo esqueleto encontras una llave oxidada.\n";

        tieneLlave = true;
    }
    else
    {
        cout << "\nAvanzas lentamente...\n";
        cout << "\nEscuchas un gruñido detras de vos.\n";
        cout << "\nUn pirata zombi emerge de las sombras.\n";

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
                else
                {
                    cout << "\nEn el bosque observas piratas zombis caminando.\n";
                    tieneMapa = true;
                    vida -= 10;
                    cout << "Obtienes un mapa pero sufres heridas.\n";
                    cout << "Vida: " << vida << endl;
                }
if(sigueVivo == false)
{
    break;
}
                cout << "\nTe dirigis hacia el faro...\n";

                for(int paso = 1; paso <= 10; paso++)
                {
                    cout << "Paso " << paso << endl;
                }

                cout << "\nEn el camino encuentras un campamento abandonado.\n";

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

                cout << "\nLlegas al viejo faro.\n";

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

                if(tieneLlave == true)
                {
                    cout << "\nAbrís la puerta del faro.\n";
                }
                else
                {
                    cout << "\nLa puerta esta cerrada.\n";
                    cout << "No puedes entrar.\n";
                    cout << "\nFINAL: ATRAPADO FUERA DEL FARO\n";
                    break;
                }

                cout << "\nSubiendo los pisos del faro...\n";

                for(int piso = 1; piso <= 5; piso++)
                {
                    cout << "Piso " << piso << endl;
                }

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
                if(vida <= 0)
                {
                    cout << "\nUn pirata zombi te sorprende y te ataca.\n";
                    cout << "\nGAME OVER\n";
                    break;
                }

                cout << "\nEn la cima encuentras una puerta secreta.\n";
                cout << "\nLa puerta tiene dos caminos.\n";
                cout << "1. Abrir la puerta de piedra\n";
                cout << "2. Seguir las marcas dejadas por los zombis\n";
                cout << "Opcion: ";
                cin >> opcionJuego;

if(opcionJuego == 1)
{
    if(tieneLlave == true)
    {
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
    }
    else
    {
        cout << "\nLa puerta no se abre.\n";
        cout << "\nGAME OVER\n";
    }
}
else
{
    if(tieneMapa == true)
    {
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
    }
    else
    {
        cout << "\nLas marcas te conducen a una emboscada.\n";

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
    }
}
cout << "\nPresiona 0 para volver al menú: ";
cin >> opcionJuego;
                cout << "\nPresiona 0 para volver al menú: ";
                cin >> opcionJuego;

                break;
            }

            case 2:

                cout << "\n================ INSTRUCCIONES ================\n";
                cout << "Ingresa el numero de cada opcion.\n";
                cout << "Tus decisiones afectan la historia.\n";
                cout << "Busca objetos utiles como la llave, el mapa y la linterna.\n";
                cout << "Llega a la cima del faro y encuentra el tesoro.\n";
                cout << "Hay varios finales posibles.\n";
                break;

            case 3:

                cout << "\nHasta luego.\n";
                return 0;

            default:

                cout << "\nOpcion invalida.\n";
        }
    }

    return 0;
}
