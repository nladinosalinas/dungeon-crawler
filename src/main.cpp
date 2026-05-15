#include "../include/render.h"
#include "../include/player.h"
#include <iostream>
#include "../include/map.h"
#include "../include/enemy.h"

int main()
{
    Player jugador;
    Enemy enemigo;
    Enemy enemigo2;

    iniciarMapa();
    
    iniciarJugador(&jugador);
    iniciarEnemigo(&enemigo, 5, 2, 0);
    iniciarEnemigo(&enemigo2, 14, 1, 1);

    char tecla;

    while (true)
    {
        system("cls");
    
        renderizar(&jugador, &enemigo, &enemigo2);

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

        if (mapa[jugador.y][jugador.x] == 'K')
        {
            jugador.tieneLlave = true;
            mapa [jugador.y][jugador.x] = '.';
        }

        moverEnemigo(&enemigo, jugador.x, jugador.y);
        moverEnemigo(&enemigo2, jugador.x, jugador.y);

        if(enemigo.x == jugador.x && enemigo.y == jugador.y)
        {
            jugador.vida--;
            jugador.x = 9;
            jugador.y = 2;
        }

        if(enemigo2.x == jugador.x && enemigo2.y == jugador.y)
        {
            jugador.vida--;
            jugador.x = 9;
            jugador.y = 2;

        if (jugador.vida <= 0)
        {
            system("cls");
            std::cout << "GAME OVER\n";
            break;
        }

        if (mapa[jugador.y][jugador.x] == 'X' && jugador.tieneLlave)
        {
            system("cls");
            std::cout << "GANASTE\n";
            break;
        }

        if (jugador.x >= COLUMNAS -1)
        {
            if (habitacionActual < 5)
            {
                cargarHabitacion(habitacionActual + 1);
                jugador.x = 1;
            }
        }

    }

    return 0;
}
