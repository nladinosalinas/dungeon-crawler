#include "../include/render.h"
#include "../include/player.h"
#include <iostream>
#include "../include/map.h"

int main()
{
    Player jugador;

    iniciarMapa();
    
    iniciarJugador(&jugador);

    char tecla;

    while (true)
    {
        system("cls");
    
        renderizar(&jugador);

        std::cout <<"\nWASD para moverte: ";
        std::cin >> tecla;

        int nuevaX = jugador.x;
        int nuevaY = jugador.y;

        if (tecla == 'w')
        {
            nuevaY--;
        }

        if (tecla == 's')
        {
            nuevaY++;
        }

        if (tecla == 'a')
        {
            nuevaX--;
        }

        if (tecla == 'd')
        {
            nuevaX++;
        }

        if (puedeMoverse(nuevaX, nuevaY))
        {
            jugador.x = nuevaX;
            jugador.y = nuevaY;
        }

        if (jugador.x >= COLUMNAS -1)
        {
            if (habitacionActual < 1)
            {
                cargarHabitacion(habitacionActual + 1);
                jugador.x = 1;
            }
        }

    }

    return 0;
}
