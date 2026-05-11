#include <iostream>
#include "../include/render.h"

void renderizar()
{
    const int FILAS = 5;
    const int COLUMNAS = 20;

    char mapa[FILAS][COLUMNAS] =
    {
        "###################",
        "#.................#",
        "#........P........#",
        "#.................#",
        "###################"
    };

    for (int i = 0; i < FILAS; i++)
    {
        std::cout << mapa[i] << "\n";
    }
}