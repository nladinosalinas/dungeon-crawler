#ifndef PLAYER_H
#define PLAYER_H

struct Player
{
    int x;
    int y;
    int vida;
    char inventario;
};

void iniciarJugador(Player* jugador);

bool puedeMoverse(int nuevaX, int nuevaY);

#endif
