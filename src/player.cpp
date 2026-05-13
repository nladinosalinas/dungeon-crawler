#include "../include/player.h"
#include "../include/map.h"

void iniciarJugador(Player* jugador)
{
    jugador->x = 9;
    jugador->y = 2;
}

bool puedeMoverse(int nuevaX, int nuevaY)
{
    if (nuevaX < 0 || nuevaX >= COLUMNAS)
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
