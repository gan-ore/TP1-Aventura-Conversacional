// Corzo
// Gandolfo
// Dotro
// El Faro de los Condenados - Juego Interactivo en C++

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string nombre;

void pausaYLimpia()
{
    cout << "\nPresiona ENTER para continuar";
    cin.ignore();
    cin.get();
    system("clear");
}

bool preguntarGuardarObjeto(string nombreObjeto)
{
    int opcion;
    
    cout << "\n" << nombre << ", ¿deseas guardar el/la " << nombreObjeto << "?\n";
    cout << "1. Sí, guardar\n";
    cout << "2. No, dejar aquí\n";
    cout << "Opción: ";
    cin >> opcion;
    
    if(opcion == 1)
    {
        cout << "\nGuardaste el/la " << nombreObjeto << ".\n";
        return true;
    }
    else
    {
        cout << "\nDecidiste dejar el/la " << nombreObjeto << " aquí.\n";
        return false;
    }
}

void abrirMapaTranquilo()
{
    cout << "\nTodo está tranquilo a tu alrededor.\n";
    cout << "Aprovechas para abrir el mapa que encontraste.\n\n";
    pausaYLimpia();

    cout << "De repente, una voz misteriosa resuena en la cueva...\n";
    cout << "\"Capitán, debes dirigirte a la base del faro.\"\n";
    cout << "\"Allí encontrarás lo que buscas.\"\n\n";
    pausaYLimpia();

    cout << "El mapa brilla con una luz extraña.\n";
    cout << "Ahora sabes el camino hacia el faro.\n";
}

void encuentroConMultiplesZombies(float &vida)
{
    cout << "\n=====================================================\n";
    cout << "              ENCUENTRO INESPERADO\n";
    cout << "=====================================================\n\n";
    pausaYLimpia();

    cout << "De repente, escuchas gruñidos desde todas direcciones...\n";
    cout << "¡10 ZOMBIES EMERGEN DE LA OSCURIDAD!\n\n";

    cout << R"(
                                                          
                                                       .                                                         
                                                 .:=#@@@@@#+:.                                                   
                                               .+%%%%%%%%%%@%@#-.                                                
                                              =%%%%#%*=--+#+#%@@#:                                               
                .::.    .=++=-.             .*%@%%+::::.:-:=*%%%%%=               .-=+=:.   .=#%#+:              
             :+%@@@#:   +@@%@@@*:          .#%%%%%%#:*+-=+-#%%%%%%@*..-=.        =%%%%%@=   -%%%@%%              
           .+%@@%%%@-  .*%%%%%@@%##-.     :#@@%%%%%%#-.:.:=++%%%%@@%%+=-        :#%%%%%@=. -%%%%%%#              
           =%@%%%%%@%*+*%@%%%%%@**%#==+ .+%%%%%%%%#--#*#*#%=#%%%%%%%**#-.-+   :*#%%%%%%%#+*%%%%%%%*...           
          -+*@%%%%%%%%%%%%%%%%@@%%@%#%#%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%@%@%* --%%%%%%%%%%%%%%%%%%%%@%+-           
        #*-*%%%%%%%%%%%%%%%%%%%%%%%%%@%@@%%%%%%%%%%%@@%%%%%%@@%%%%%%%%%%@%@=@@%%%%%%%%%%%%%%%%%%%%@#*+-+-        
    .+%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%@@%%%%%%%%%%@%##**********##%@%%%%@%@%@%%%%%%%%%%%%%%%%%%%%%%@@@@%+:         
     =*%@@%%%%%%%%@@%%%###%%@@@%%@@@@@%@@@@@@%@######%%=-----+##*#@@@@@@@@@%%%%%%%%%@@@@@%%%%%%%%%%%@@+.         
      .=**%@@%%@%#*****%%@@%%%##%@@%=+@@@@@@@@%*=-----=%%+=**+--*#@@@@@%@@@%%%%%@*=-----=*@@@@%%%%%%%%%#-        
         .-*%@%#%%*#@*-*@%%=-:+-*@=   +@@@@@#%%:+%@@#=-+=%@%%%%#-#%#@@@*:*%@@@@#-=-::::::::*%+%@@%%%%%%%%*       
           .:#@-+#+--------*@@*-=%##-     :==%*:+%@@@@+--#%%%%%#=+%=*:    .%==#+=%@@+-:--::--:-+@@%%%%@%%+       
          :++=#:+@@@@%#=#%@@@@#-+#*=*.     =-=*:-+#%#-=#+=%%%%%#=++=*      *:##=+%@@@@#+*=+#%@%+#@@@@@%%+        
          :==*%:=%@@%+-==-*%%#=:+%++=       =@@%=--::------::-=*@@@*:     .=#++:-*%%#=-=-%@@@@#-#@@@%#=.         
           :=+*-:-=+=-=-=-::--=+%*=:      .+%@@@+==-+%#*+%#*--##@@@%-    -%@@@%#*--::-+*=-#%%*-+*+==             
               -**=-:--===---*#***%+.       :=+@*--+#***+***+-=*#%===    :%@@@*==:-=+**++-----=+*=*.             
                *-+-+**=+=*#=--=###-          :+-**=::-=-::-+#%=:.       .*@@@%+-+%*#*##*%+=#%@%+:.-:.           
                -=--++--=-::-+#%%##*.        .-++=**#*+++*#%*+*+*#:       ..:@%##=::---=+**-+%@@-*#+*#-          
                  .+*=---==+++@%@@@%*-    :=#%%%+-=++**###**+++**%%#=:  .-=+*##*=#*=-::-==*%@@@#-%+.-#=          
                +*###*#%%%##*#%#%%##%%+ :#%%%%#%*=**==+*****+*#**%%%%%##*++++**---*++***- =#-#+. :*%%*:          
               *######*****##**%%%###@%##%%%%####+-+*+++++*##*+*%%###%%%#+#==+*+-::::::*#-   ..   -%%#:          
            .=#####%##******#+=%@%###@%#%##########-=++++++=--#%#####%%%%+#===+**-:-+=--+#*.     :#%%%%-         
         .=###%####%%==#*#+=-=+%%####%%%##########%@%+-=+--+#@%#######%#%##+====+*#+-=+**++#+:   =@%%%%%##-      
          -###%%%%%%##+----:-#*%%%%%%%@%#############%++***%#%%####%%####%%======+**=**+===+*#=.*##%%@%%%%%+     
         :***##@%#%@#*%---=**#*%%%#%@%@%#####@######%%#=:-*%#######@#####%%=======+#-+*+==+#++*%#%%+.  .#%%#.    
         :#***#***#%%**#+--*#*#%#***#@@@%###%@%#######%=-+########%%######%#======+*%*+===#*==+##%%     -%%*     
        .#****%**###%#**#-+%**%%%%#*###%%###%@%########*-#%######%%%#######%+=======+=====%+===*%%%=    =%#.     
        +*****#%##%%%%**#@#+**%%%%#*%######%%@%#########%%%######%@@%#######%+========++=+%+===++%%%#:  -:       
       -#*****#@*#%%#%***#****@%%#*########%@%%##########%%######%@%%#####@#==========**=+%+===+++*...           
      .#*****####**##%#*#%****@##**%######%%%%%#########%%#######%@#@####%#%*#*++=====**=+%*+****##=             
     .*******#%-+****#%**#****%#**########%@#%@##################%@*@%########***+*+++**=+#%#*##+-=*             
     =*******#% :#*##*%#**#***%*#%%%#####%%@%@%%################%%%*@%#####%%%#++*#***++=+*+*#=-:==+             
     =%%%****#% .**####%*#****%**#%#%###%%%%=##%################%%%@#%####%%%%@%##+======++* .=+=*               
     +#@######%-.+*****%******%**#%%#*%%##@#=%#%%%###########%%%%%#%-%%##%+**#**+=====+***+#.                    
     :.::.::::   .::::::::::::-:::::-:++::-..+-+++++++++++++++++++++.===:-:::..:::::::::--.:.                    
                                                                                                                 
                                                                                                                
                                                                          
    ¡HORDA DE ZOMBIES!
    
)";

    pausaYLimpia();

    cout << "Pero estos zombies son más lentos y débiles que el anterior.\n";
    cout << "Tu ventaja: Por cada ataque de ellos, tu realizas 2 ataques.\n\n";
    pausaYLimpia();

    int zombiesRestantes = 10;
    int opcionCombate;

    while(zombiesRestantes > 0 && vida > 0)
    {
        cout << "\n=====================================================\n";
        cout << "            COMBATE CONTRA HORDA\n";
        cout << "=====================================================\n";
        cout << "Zombies restantes: " << zombiesRestantes << "\n";
        cout << "Tu vida: " << vida << " / 100\n\n";

        cout << "¿Qué haces?\n";
        cout << "1. Atacar (2 ataques antes del contraataque)\n";
        cout << "2. Huir\n";
        cout << "Opcion: ";
        cin >> opcionCombate;
        pausaYLimpia();

        if(opcionCombate == 1)
        {
            // PRIMER ATAQUE DEL JUGADOR
            cout << "\n¡Realizas tu primer ataque!\n";
            zombiesRestantes--;
            cout << "Derrotas a un zombie. Quedan: " << zombiesRestantes << "\n\n";

            if(zombiesRestantes == 0)
            {
                cout << "¡Has derrotado a todos los zombies!\n";
                cout << "¡VICTORIA!\n";
                pausaYLimpia();
                break;
            }

            // SEGUNDO ATAQUE DEL JUGADOR
            cout << "¡Realizas tu segundo ataque!\n";
            zombiesRestantes--;
            cout << "Derrotas a otro zombie. Quedan: " << zombiesRestantes << "\n\n";

            if(zombiesRestantes == 0)
            {
                cout << "¡Has derrotado a todos los zombies!\n";
                cout << "¡VICTORIA!\n";
                pausaYLimpia();
                break;
            }

            // CONTRAATAQUE DE LOS ZOMBIES
            if(zombiesRestantes > 0)
            {
                cout << "Los " << zombiesRestantes << " zombies restantes avanzan lentamente...\n";
                cout << "¡Te atacan a la vez!\n";
                vida -= 5;
                cout << "Recibes 5 de daño. Tu vida: " << vida << " / 100\n";
                pausaYLimpia();
            }
        }
        else if(opcionCombate == 2)
        {
            cout << "\n¡Intentas huir de la horda!\n";
            cout << "Los zombies son lentos, logras escapar.\n";
            cout << "Pero dejaste algunos zombies atrás...\n\n";
            pausaYLimpia();
            break;
        }

        if(vida <= 0)
        {
            cout << "\n¡La horda te ha derrotado!\n";
            cout << "GAME OVER\n";
            pausaYLimpia();
            break;
        }
    }
}

void obtenerLlaveDelZombie(bool &tieneLlave, bool &zombieMuerto, float &vida)
{
    cout << "\nEl zombie custodiaba una llave antigua...\n";
    cout << "¡Obtuviste la LLAVE DEL TESORO!\n";
    
    cout << R"(
                    
     8 8 8 8                     ,ooo.
     8a8 8a8                    oP   ?b
    d888a888zzzzzzzzzzzzzzzzzzzz8     8b
     `""^""'                    ?o___oP'
                   
             ¡LLAVE OBTENIDA!
                    
)";
    
    tieneLlave = true;
    zombieMuerto = true;
    
    pausaYLimpia();

    // RANDOM: 50% chance de cada evento
    int azarEvento = (rand() % 2) + 1;

    if(azarEvento == 1)
    {
        // Opción 1: Abre el mapa tranquilo
        abrirMapaTranquilo();
    }
    else
    {
        // Opción 2: Aparecen 10 zombies
        encuentroConMultiplesZombies(vida);
    }
}

int main()
{
    srand(time(0));
    
    int opcionMenu;
    int opcionJuego;

    bool tieneLinterna;
    bool tieneLlave;
    bool tieneMapa;
    bool sigueVivo;

    float vida;

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
        system("clear");

        switch(opcionMenu)
        {
            case 1:
            {
                tieneLinterna = false;
                tieneLlave = false;
                tieneMapa = false;
                sigueVivo = true;
                vida = 100.0;

                cout << "\nCapitán, ¿Cuál es tu nombre?\n";
                cin >> nombre;

                cout << "\n=====================================================\n";
                cout << "            INICIANDO LA AVENTURA...\n";
                cout << "=====================================================\n\n";
                pausaYLimpia();

                cout << "\n\nUna tormenta obliga a tu barco a buscar refugio.\n";
                cout << "La Isla Prohibida aparece frente a ti.\n";
                cout << "Las leyendas hablan del tesoro de Los Piratas Marplatenses.\n";

                cout << R"(
                
         ,-'-.     _.,                         ,-'-.     _.,
       . (    '("'-'  ').                    . (    '("'-'  ').
    ( ' ((  |.      )\/( )                ( ' ((  |.      )\/( )
     '(  )) | () |" |  | ')                '(  )) | () |" |  | ')
        ( . ,-. ,-.. _.)                    ( . ,-. ,-.. _.)
          /)  /  ' /                           /)  /  ' /
         /   /) / /                           /   /) / / 
                
  
                
                               |    |    |
                              )_)  )_)  )_)
                             )___))___))___)
                            )____)____)_____)
                          _____|____|____|____
                 ---------\                   /---------
                   ^^^^^ ^^^^^^^^^^^^^^^^^^^^^
                     ^^^^      ^^^^     ^^^
                          ^^^^
                        
)";

                cout << "\n¿Qué desea hacer?\n";
                cout << "1. Explorar la playa\n";
                cout << "2. Explorar la cueva\n";
                cout << "3. Explorar el bosque\n";
                cout << "Opcion: ";
                cin >> opcionJuego;
                pausaYLimpia();

                // Rama 1: Explorar la playa
                if(opcionJuego == 1)
                {
                    cout<< R"(        
           /|
        /\/ |/\
        \  ^   | /\  /\
  (\/\  / ^   /\/  )/^ )
   \  \/^ /\       ^  /
    )^       ^ \     (
   (   ^   ^      ^\  )
    \___\/____/______/
    [________________]
     |              |
     |     //\\     |
     |    <<()>>    |
     |     \\//     |
      \____________/
          |    |
          |    |
          |    |
          |    |
          |    |
          |    |
          |____|
                    )";
                    cout << "\nEncontraste una linterna entre los restos de una barcasa vieja y rota, medio tapada por la arena.\n";
                    tieneLinterna = preguntarGuardarObjeto("linterna");
                    pausaYLimpia();

                    cout << "\n1. Buscar más objetos\n";
                    cout << "2. Continuar\n";
                    cin >> opcionJuego;
                    pausaYLimpia();

                    if(opcionJuego == 1)
                    {
                        cout << R"(
-------------------------------------------------------------                      
|             ~   ~  ~   ~   ~                  ~   ~   ~   |
|      ~   ~   ~                    ~   ~   ~   ~           |
|  ~   ~                      /\                            |
|                            |#|                            |             
|                            ===                            |
|                            | |                            |
|                    ________| |_______                     |
|                 __/                  \__                  |    
|              __/                        \__               |
|           __/     ^^           .          \__             |     
|        __/      ^^^^^           .            \__          |
|      _/         ^               .              \_         |
|      \                           .               X        |
|       \___________________________\_____________/         |
|                                                           |
|                              |>                           |
|                            __||__                         |
|                ~  ~  ~     \____/     ~  ~  ~             |
|                     ~  ~     ~  ~      ~  ~               |
-------------------------------------------------------------
                        )";
                        cout << "\nTambién encontraste un mapa antiguo en un viejo bolso de piel de foca\n";
                        tieneMapa = preguntarGuardarObjeto("mapa");
                        pausaYLimpia();
                    } else{
                        cout << "\n¿Cuál es tu siguiente destino?\n";
                        cout << "2. Explorar la cueva\n";
                        cout << "3. Explorar el bosque\n";
                        cout << "Opción: ";
                        cin >> opcionJuego;
                        pausaYLimpia();
                    }
                }
                // Rama 2: Explorar la cueva - MEJORADA CON COMBATE
                else if(opcionJuego == 2)
                {
                    cout << "\n=====================================================\n";
                    cout << "                  ENTRANDO A LA CUEVA\n";
                    cout << "=====================================================\n\n";
                    pausaYLimpia();

                    cout << "\nLa cueva está muy oscura.\n";
                    cout << "Es peligroso entrar sin poder ver bien.\n";
                    cout << "Escuchas sonidos extraños en la oscuridad...\n\n";

                    pausaYLimpia();

                    cout << "¿Tienes una linterna para iluminar tu camino?\n";
                    cout << "\n1. Sí, tengo linterna\n";
                    cout << "2. No, no tengo linterna\n";
                    cout << "Opcion: ";
                    cin >> opcionJuego;
                    pausaYLimpia();

                    // RAMA 2A: Sin linterna - MUERTE EN POZO
                    if(opcionJuego == 2)
                    {
                        cout << "\nAvanzas lentamente en la total oscuridad.\n";
                        cout << "Cada paso es inseguro...\n";
                        cout << "No puedes ver absolutamente nada...\n\n";
                        
                        pausaYLimpia();

                        cout << "De repente, sientes que el suelo desaparece bajo tus pies.\n\n";

                        cout << R"(
                                                                   ..:                            
                               ..                                  .::::                            
                             .*%%-                                 ::--:                            
                            +%%%#                                  .---                             
                          -%%%%*                                  .---.                             
                       .+%%%%%#.                                   :--.                             
                      :%%%%%%%#.                                   .+%%                             
                       +%%%%##*..                                  %%#+                             
                         =*-::::::.                                   ..                            
                           .:::::::.                               #@@@#                            
                            .::::::::.                             ::                               
                             .::::::::.                            -*#%%:                           
                              .:::::::::                           --:..         ::+:               
                               .:::::::::.            :.:.:        .=#@@#      -#@%=: .--           
              .:                 ::::::::::.        ...:--:.       **=:.     :*@@#++**#%=*          
             -%%=                 .::::::::::.       :::---.         .=##: .=@@%*#=:-@@@+*:         
             *%%*                  .:::::::::::.      ----.        #@@@@%-=@@@@%+-.-#@@@#++         
            .#%%%.                   .:::::::::.      ---:         -+:    =@@@#*%#=#*@@@*+*         
            :%%%%#                    .:::::::-:.     :----          -*%@@:*@%@@@@@*@@@@+#+         
            =%%%%%#..:::.........::::::::::::::::.     -#@=         @@@@+. %#-:+#@@@@@@@+#:         
            +%%%%%#-:::::::::::::::::::::::::::::.     :: .*@+      -.   :+*=#@%++#%@@@@#=:         
           .#%%%%+-::::::::::::::::::::::::::::::-.      #@@=       .=#@@*:.:+@%++#%%@@@@*=*.       
             :=*#=:::::::::::::::::::::::::::::::::       .  -%@#   #*:  .::::::--+%#%@@@@+*.       
                      ....:::::::::::.....:::::::::.       -@@%- :*:=@% .#*------+%%=    ..         
                                          .::::::::..       :.  .%@* =@%.-------*%%%+               
                                          .:::::::::.       . =@@@*  =@@.:##=--:  :-.               
                                          .::::::::::.##. -@@+.+*.  :@@#   @@=+%-                   
                                          .:::::::::::%@+  +@@=  =.+@@#   .@@- :#.                  
                                          :-::::::::::=@@:  %@%: .%@@=    *@@:  +.                  
                                          :-:::::::::::#@@  .@@#  :@@#. .*@@*  .-                   
                                          .-::::::::::.-@@=  =@@=  =@@*  +@#:                       
                                           ::::::::::.- %@#. .#@@:  +@@+  :@*.                      
                                            .::::::::-+ =@@=  -@@#   *@@=                           
                                             .:::::::#+  @@%   #@@=   .                             
                                                 ...:@*  =#*.                                       
             
            ¡AHHHHHHHHH!
            
           
           CRASH
           
                
              [POZO PROFUNDO]
            
)";

                        cout << "\n¡Te has caído a un pozo profundo del que no puedes escapar!\n";
                        cout << "La oscuridad completa te rodea...\n";
                        cout << "\nGAME OVER - ATRAPADO EN EL POZO\n";
                        pausaYLimpia();
                        sigueVivo = false;
                    }
                    // RAMA 2B: Con linterna - COMBATE CON ZOMBIE
                    else if(opcionJuego == 1)
                    {
                        cout << "\nEnciendes tu linterna.\n";
                        cout << "La luz ilumina las paredes húmedas de la cueva.\n";
                        cout << "Avanzas con cuidado...\n\n";
                        
                        pausaYLimpia();

                        cout << "De repente, la luz revela algo aterrador.\n";
                        cout << "Un ZOMBIE emerge de las sombras, gruñendo...\n";
                        cout << "¡Te ataca por sorpresa!\n\n";

                        cout << R"(

                                .+**+:                                    
                              =%%#++*%#+                                  
                           :*%@@@%%%#%@%%##+                              
                         .-%@@@@%##+*@@@-                               
                              @%*+=#%%#+                                
                    -=#-  #%%@@@%%##@@%:..    *=.                       
                   #%%%##=##%@#@%@%%#=####*%%%#+                      
                   =. #@%@@%%@@@@##++#%#%@%%%@%*+==                     
                      .+@@%+%@@#%#++*+##%@@@%@@@%+ :                      
                        .:  +@%##%=*%%@%.:-%=  :                       
                            +%%%%=#%%#@@%@#   -.   :                      
                            %#@@+=%%@@@%%-                              
                           @%@@@%%#%%%@@@%%                             
                          *@@@@@@%%@%@%%@@@%#.                            
                         @%@%%%%%%@%%%@@%%                            
                        *%%@@%%%#%%%%%@%#@%@%##                           
                       :%%@@%##%%@@@@%%%%%%@@%%#:                         
                       :#:@###%@@-%%##%%==#=.                         
                       +- %*%%+ .  =%%##%#  --                          
                          #@%%%%:    :+@%#%*                              
                         :%@%@%+      =%@%#%+                             
                         -@@@%%+        *@%+                              
                          #@%%*.         %%+                              
                         .%@%%           .#+                              
                        =%##%%.           +*                              
                      -@%%%#.             :#            

)";

                        cout << "\n¡El zombi te golpea!\n";
                        vida -= 10;
                        cout << "Tu vida: " << vida << " / 100\n";
                        cout << "Vida del Zombie: 100 / 100\n\n";
                        
                        pausaYLimpia();

                        // SISTEMA DE COMBATE CON EL ZOMBIE
                        float vidaZombie = 100.0;
                        bool zombieMuerto = false;

                        while(vida > 0 && vidaZombie > 0)
                        {
                            cout << "\n=====================================================\n";
                            cout << "                    COMBATE EN LA CUEVA\n";
                            cout << "=====================================================\n";
                            cout << "Tu vida: " << vida << " / 100\n";
                            cout << "Vida del Zombie: " << vidaZombie << " / 100\n\n";

                            cout << "¿Qué haces?\n";
                            cout << "1. Atacar con la linterna (daño: 15)\n";
                            cout << "2. Atacar con la espada (daño: 40)\n";
                            cout << "3. Asustarte y salir corriendo\n";
                            cout << "Opcion: ";
                            cin >> opcionJuego;
                            pausaYLimpia();

                            // OPCIÓN 1: Ataque con linterna
                            if(opcionJuego == 1)
                            {
                                cout << "\n¡Golpeas al zombie con la linterna!\n";
                                vidaZombie -= 15;
                                cout << "Daño infligido: 15\n";
                                cout << "Vida del Zombie: " << vidaZombie << " / 100\n\n";

                                if(vidaZombie <= 0)
                                {
                                    cout << "¡El zombie cae derrotado!\n\n";
                                    cout << R"(
                    
                               -|-
                                |
                            .-'~~~`-.
                          .'         `.
                          |  R  I  P  |
                          |           |
                          |           |
                        \\|           |//
           ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ 
                        ¡ZOMBIE VENCIDO! 
                    
)";
                                    obtenerLlaveDelZombie(tieneLlave, zombieMuerto, vida);
                                    pausaYLimpia();
                                    break;
                                }

                                cout << "\nEl zombie te contraataca furioso!\n";
                                vida -= 20;
                                cout << "¡Te golpea! Daño recibido: 20\n";
                                cout << "Tu vida: " << vida << " / 100\n";
                                pausaYLimpia();
                            }
                            // OPCIÓN 2: Ataque con espada
                            else if(opcionJuego == 2)
                            {
                                cout << "\n¡Desenvaines la espada y ataca al zombie!\n";
                                vidaZombie -= 40;
                                cout << "Daño infligido: 40\n";
                                cout << "Vida del Zombie: " << vidaZombie << " / 100\n\n";

                                if(vidaZombie <= 0)
                                {
                                    cout << "¡El zombie es derrotado por tu espada!\n\n";
                                    cout << R"(
                    
     
                               -|-
                                |
                            .-'~~~`-.
                          .'         `.
                          |  R  I  P  |
                          |           |
                          |           |
                        \\|           |//
           ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                        ¡ZOMBIE VENCIDO!
                    
)";
                                    obtenerLlaveDelZombie(tieneLlave, zombieMuerto, vida);
                                    pausaYLimpia();
                                    break;
                                }

                                cout << "\nEl zombie intenta vengarse y te ataca!\n";
                                vida -= 20;
                                cout << "¡Te golpea! Daño recibido: 20\n";
                                cout << "Tu vida: " << vida << " / 100\n";
                                pausaYLimpia();
                            }
                            // OPCIÓN 3: Salir corriendo (random)
                            else if(opcionJuego == 3)
                            {
                                cout << "\n¡Asustado, intentas huir corriendo!\n";
                                cout << "Corres desesperadamente por los pasillos oscuros...\n\n";
                                pausaYLimpia();

                                int azarHuida = (rand() % 3) + 1;

                                // CAMINO 1: Te caes a un pozo
                                if(azarHuida == 1)
                                {
                                    cout << "¡En tu pánico no ves donde pisas!\n";
                                    cout << "De repente, el suelo desaparece...\n\n";

                                    cout << R"(   
                                                                    ..:                            
                               ..                                  .::::                            
                             .*%%-                                 ::--:                            
                            +%%%#                                  .---                             
                          -%%%%*                                  .---.                             
                       .+%%%%%#.                                   :--.                             
                      :%%%%%%%#.                                   .+%%                             
                       +%%%%##*..                                  %%#+                             
                         =*-::::::.                                   ..                            
                           .:::::::.                               #@@@#                            
                            .::::::::.                             ::                               
                             .::::::::.                            -*#%%:                           
                              .:::::::::                           --:..         ::+:               
                               .:::::::::.            :.:.:        .=#@@#      -#@%=: .--           
              .:                 ::::::::::.        ...:--:.       **=:.     :*@@#++**#%=*          
             -%%=                 .::::::::::.       :::---.         .=##: .=@@%*#=:-@@@+*:         
             *%%*                  .:::::::::::.      ----.        #@@@@%-=@@@@%+-.-#@@@#++         
            .#%%%.                   .:::::::::.      ---:         -+:    =@@@#*%#=#*@@@*+*         
            :%%%%#                    .:::::::-:.     :----          -*%@@:*@%@@@@@*@@@@+#+         
            =%%%%%#..:::.........::::::::::::::::.     -#@=         @@@@+. %#-:+#@@@@@@@+#:         
            +%%%%%#-:::::::::::::::::::::::::::::.     :: .*@+      -.   :+*=#@%++#%@@@@#=:         
           .#%%%%+-::::::::::::::::::::::::::::::-.      #@@=       .=#@@*:.:+@%++#%%@@@@*=*.       
             :=*#=:::::::::::::::::::::::::::::::::       .  -%@#   #*:  .::::::--+%#%@@@@+*.       
                      ....:::::::::::.....:::::::::.       -@@%- :*:=@% .#*------+%%=    ..         
                                          .::::::::..       :.  .%@* =@%.-------*%%%+               
                                          .:::::::::.       . =@@@*  =@@.:##=--:  :-.               
                                          .::::::::::.##. -@@+.+*.  :@@#   @@=+%-                   
                                          .:::::::::::%@+  +@@=  =.+@@#   .@@- :#.                  
                                          :-::::::::::=@@:  %@%: .%@@=    *@@:  +.                  
                                          :-:::::::::::#@@  .@@#  :@@#. .*@@*  .-                   
                                          .-::::::::::.-@@=  =@@=  =@@*  +@#:                       
                                           ::::::::::.- %@#. .#@@:  +@@+  :@*.                      
                                            .::::::::-+ =@@=  -@@#   *@@=                           
                                             .:::::::#+  @@%   #@@=   .                             
                                                 ...:@*  =#*.                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                      
                     
                    ¡AHHHHHHHHH!
                    
                   
                   CRASH
                    
)";

                                    cout << "\n¡Te has caído a un pozo profundo!\n";
                                    cout << "No logras escapar de la oscuridad...\n";
                                    cout << "\nGAME OVER - CAÍSTE EN EL POZO\n";
                                    vida = 0;
                                    pausaYLimpia();
                                    break;
                                }
                                // CAMINO 2: El zombie te alcanza y ataca
                                else if(azarHuida == 2)
                                {
                                    cout << "¡El zombie te alcanza desde atrás!\n";
                                    cout << "Te derriba al suelo con un golpe terrible...\n";
                                    vida -= 35;
                                    cout << "¡Recibes un ataque devastador! Daño: 35\n";
                                    cout << "Tu vida: " << vida << " / 100\n\n";

                                    if(vida <= 0)
                                    {
                                        cout << "El zombie te derrota...\n";
                                        cout << "\nGAME OVER - ATACADO POR EL ZOMBIE\n";
                                        pausaYLimpia();
                                        break;
                                    }

                                    cout << "Logras escapar momentáneamente y vuelves a la lucha.\n";
                                    pausaYLimpia();
                                }
                                // CAMINO 3: Logras salir
                                else if(azarHuida == 3)
                                {
                                    cout << "¡Encuentras una salida lateral!\n";
                                    cout << "El zombie no puede seguirte...\n";
                                    cout << "¡Logras escapar de la cueva!\n\n";
                                    pausaYLimpia();

                                    cout << "Sin embargo, no obtuviste la llave.\n";
                                    cout << "¿Cuál es tu siguiente destino?\n";
                                    cout << "1. Continuar explorando la cueva\n";
                                    cout << "2. Explorar el bosque\n";
                                    cout << "Opcion: ";
                                    cin >> opcionJuego;
                                    pausaYLimpia();
                                    break;
                                }
                            }

                            if(vida <= 0)
                            {
                                cout << "\n¡Tu vida se ha agotado!\n";
                                cout << "El zombie te ha derrotado...\n";
                                cout << "\nGAME OVER\n";
                                pausaYLimpia();
                                break;
                            }
                        }

                        if(zombieMuerto)
                        {
                            cout << "\nHas superado la prueba de la cueva.\n";
                            cout << "Continuarás hacia el faro con la llave en tu poder...\n\n";
                            pausaYLimpia();
                        }
                    }
                }
                // Rama 3: Explorar el bosque
                else
                {
                    cout << "\nEn el bosque observas piratas zombis caminando.\n";
                    cout << "Obtienes un mapa pero sufres heridas.\n";
                    tieneMapa = preguntarGuardarObjeto("mapa");
                    vida -= 10;
                    cout << "Vida: " << vida << endl;
                }

                // Verificar si el jugador murió en la primera fase
                if(sigueVivo == false)
                {
                    pausaYLimpia();
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
                    pausaYLimpia();
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
                    pausaYLimpia();
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
                        pausaYLimpia();
                    }
                    else
                    {
                        cout << "\nLa puerta no se abre.\n";
                        cout << "\nGAME OVER\n";
                        pausaYLimpia();
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
                        pausaYLimpia();
                    }
                    else
                    {
                        cout << "\nLas marcas te conducen a una emboscada.\n";

                        cout << R"(

                                .+**+:                                    
                              =%%#++*%#+                                  
                           :*%@@@%%%#%@%%##+                              
                         .-%@@@@%##+*@@@-                               
                              @%*+=#%%#+                                
                    -=#-  #%%@@@%%##@@%:..    *=.                       
                   #%%%##=##%@#@%@%%#=####*%%%#+                      
                   =. #@%@@%%@@@@##++#%#%@%%%@%*+==                     
                      .+@@%+%@@#%#++*+##%@@@%@@@%+ :                      
                        .:  +@%##%=*%%@%.:-%=  :                       
                            +%%%%=#%%#@@%@#   -.   :                      
                            %#@@+=%%@@@%%-                              
                           @%@@@%%#%%%@@@%%                             
                          *@@@@@@%%@%@%%@@@%#.                            
                         @%@%%%%%%@%%%@@%%                            
                        *%%@@%%%#%%%%%@%#@%@%##                           
                       :%%@@%##%%@@@@%%%%%%@@%%#:                         
                       :#:@###%@@-%%##%%==#=.                         
                       +- %*%%+ .  =%%##%#  --                          
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
                cout << "\n=====================================================\n";
                cout << "                  INSTRUCCIONES\n";
                cout << "=====================================================\n\n";
                
                cout << "OBJETIVO:\n";
                cout << "Llega a la cima del faro y encuentra el tesoro de los\n";
                cout << "Piratas Marplatenses.\n\n";

                cout << "CONTROLES:\n";
                cout << "Ingresa el número de cada opción para tomar decisiones.\n";
                cout << "Tus decisiones afectarán el destino de tu aventura.\n\n";

                cout << "OBJETOS IMPORTANTES:\n";
                cout << "- LINTERNA: Te permite ver en lugares oscuros y atacar\n";
                cout << "  al zombie. Sin ella, te caerás a un pozo en la cueva.\n";
                cout << "- LLAVE: Abre la puerta del faro. Obtenla derrotando\n";
                cout << "  al zombie en la cueva.\n";
                cout << "- MAPA: Te ayuda a encontrar el tesoro verdadero.\n\n";

                cout << "COMBATE EN LA CUEVA:\n";
                cout << "Si tienes linterna, encontrarás un zombie.\n";
                cout << "Tienes 3 opciones para enfrentarlo:\n";
                cout << "  1. Atacar con linterna (daño: 15)\n";
                cout << "  2. Atacar con espada (daño: 40)\n";
                cout << "  3. Salir corriendo (resultado aleatorio):\n";
                cout << "     - Caes en un pozo (GAME OVER)\n";
                cout << "     - El zombie te alcanza\n";
                cout << "     - Logras escapar sin llave\n\n";

                cout << "SISTEMA DE VIDA:\n";
                cout << "- Comienzas con 100 puntos de vida.\n";
                cout << "- Cada golpe reduce tu vida.\n";
                cout << "- Si tu vida llega a 0, GAME OVER.\n\n";

                cout << "FINALES POSIBLES:\n";
                cout << "- Victoria: Encontrar parte del tesoro\n";
                cout << "- Final verdadero: Usar el mapa para obtener todo\n";
                cout << "- Atrapado fuera del faro: Sin llave\n";
                cout << "- Emboscada: Sin mapa\n\n";

                cout << "CONSEJOS:\n";
                cout << "- Recoge todos los objetos que encuentres.\n";
                cout << "- La espada es más efectiva que la linterna.\n";
                cout << "- Ten cuidado en la cueva sin linterna.\n";
                cout << "- Planifica tu ruta hacia el tesoro.\n\n";

                pausaYLimpia();
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
