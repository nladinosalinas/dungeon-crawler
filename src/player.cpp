#include "../include/player.h"
#include "../include/map.h"

void iniciarJugador(Player* jugador)
{
    jugador->x = 9;
    jugador->y = 2;
    jugador->vida = 3;
    jugador->inventario = ' ';
}

bool puedeMoverse(int nuevaX, int nuevaY)
{
    if (nuevaX < 0 || nuevaX >= COLUMNAS - 1)
    {
        return false;
    }

    if (nuevaY < 0 || nuevaY >= FILAS)
    {
        return false;
    }

    if (mapa[nuevaY][nuevaX] == '#')
    {
        return false;
    }

    return true;
}
