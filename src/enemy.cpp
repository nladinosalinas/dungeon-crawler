#include "../include/enemy.h"
#include "../include/player.h"
#include "../include/map.h"

void iniciarEnemigo(Enemy* enemigo, int x, int y)
{
    enemigo->x = x;
    enemigo->y = y;
    enemigo->activo = true;
}

void moverEnemigo(Enemy* enemigo, int jugadorX, int jugadorY)
{
    int nuevaX = enemigo->x;
    int nuevaY = enemigo->y;

    if (jugadorX > enemigo->x)
    {
        nuevaX++;
    }

    if (jugadorX < enemigo->x)
    {
        nuevaX--;
    }

    if (jugadorY > enemigo->y)
    {
        nuevaY++;
    }

    if (jugadorY < enemigo->y)
    {
        nuevaY--;
    }

    if (nuevaX >= 0 && nuevaX < COLUMNAS)
    {
        if (nuevaY >= 0 && nuevaY < FILAS)
        {
            if (mapa[nuevaY][nuevaX] != '#')
            { 
                enemigo->x = nuevaX;
                enemigo->y = nuevaY;
            }
        }
    }
}
