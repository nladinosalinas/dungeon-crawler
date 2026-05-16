#include <iostream>
#include "../include/render.h"
#include "../include/player.h"
#include "../include/map.h"
#include "../include/enemy.h"

void renderizar(Player* jugador, Enemy* enemigo, Enemy* enemigo2)
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

            else if (i == enemigo2->y && j == enemigo2->x)
            std:: cout << "T";
            
            else
            {
                std::cout << mapa[i][j];
            }
        }

        std::cout << "\n";
    }

    std::cout<< "\nHabitacion: " << habitacionActual + 1 << "\n";
    std::cout<< "Vida: " << jugador->vida <<"\n";

    if (jugador->inventario == 'K')
    {
        std::cout << "Inventario: llave\n";
    }
    else {
        std:: cout << "Inventario: vacio\n";
    }

    std::cout << "K: llave  P: pocion  X: salida  E: soltar\n";
}
