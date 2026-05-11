#include "../include/render.h"
#include "../include/player.h"
#include <iostream>

int main()
{
    Player jugador;

    iniciarJugador(&jugador);

    char tecla;

    while (true)
    {
        system("cls");
    
        renderizar(&jugador);

        std::cout <<"\nWASD para moverte: ";
        std::cin >> tecla;

        if (tecla == 'w')
        {
            jugador.y--;
        }

        if (tecla == 's')
        {
            jugador.y++;
        }

        if (tecla == 'a')
        {
            jugador.x--;
        }

        if (tecla == 'd')
        {
            jugador.x++;
        }
    }

    return 0;
}