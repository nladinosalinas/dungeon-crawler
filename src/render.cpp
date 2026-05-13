#include <iostream>
#include "../include/render.h"
#include "../include/player.h"
#include "../include/map.h"

void renderizar(Player* jugador)
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS - 1; j++)
        {
            if (i == jugador->y && j == jugador->x)
            {
                std::cout << "M";
            }
            else
            {
                std::cout << mapa[i][j];
            }
        }

        std::cout << "\n";
    }
}