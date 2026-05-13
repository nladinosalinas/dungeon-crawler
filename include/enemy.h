#ifndef ENEMY_H
#define ENEMY_H

struct Enemy
{
    int x;
    int y;
    bool activo;
};

void iniciarEnemigo(Enemy* enemigo, int x, int y);

void moverEnemigo(Enemy* enemigo, int jugadorX, int jugadorY);

#endif