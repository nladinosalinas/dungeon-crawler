#include <iostream>
#include "../include/render.h"
#include "../include/player.h"

void renderizar(Player* jugador)
{
    const int FILAS = 5;
    const int COLUMNAS = 20;

    char mapa[FILAS][COLUMNAS] =
    {
        "###################",
        "#.................#",
        "#.................#",
        "#.................#",
        "###################"
    };

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