#include <iostream>
#include "../include/render.h"
#include "../include/player.h"
#include "../include/map.h"
#include "../include/enemy.h"

void renderizar(Player* jugador, Enemy* enemigo)
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS - 1; j++)
        {
            if (i == jugador->y && j == jugador->x)
            {
                std::cout << "M";
            }
            
            else if(i == enemigo->y && j == enemigo->x)
            {
                std::cout << "E";
            }
            
            else
            {
                std::cout << mapa[i][j];
            }
        }

        std::cout << "\n";
    }

    std::cout<< "\nVida: " << jugador->vida <<"\n";
}