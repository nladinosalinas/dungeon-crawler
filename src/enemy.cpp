#include "../include/enemy.h"
#include "../include/player.h"
#include "../include/map.h"

void iniciarEnemigo(Enemy* enemigo, int x, int y, int tipo)
{
    enemigo->x = x;
    enemigo->y = y;
    enemigo->activo = true;
    enemigo->tipo = tipo;
    enemigo->direccion = 1;
}

void moverEnemigo(Enemy* enemigo, int jugadorX, int jugadorY)
{
    if (enemigo->tipo == 0)
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

if (enemigo->tipo == 1)
    {
        int nuevaX = enemigo->x + enemigo->direccion;

        if (jugadorY == enemigo->y)
        {
            if (jugadorX > enemigo->x)
            {
                nuevaX = enemigo->x + 1;
            }

            if (jugadorX < enemigo->x)
            {
                nuevaX = enemigo->x - 1;
            }
        }

        if (nuevaX <= 0 || nuevaX >= COLUMNAS - 1)
        {
            enemigo->direccion *= -1;
        }
        else if (mapa[enemigo->y][nuevaX] == '#')
        {
            enemigo->direccion *= -1;
        }
        else
        {
            enemigo->x = nuevaX;
        }
    }
}
