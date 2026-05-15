#ifndef ENEMY_H
#define ENEMY_H

struct Enemy
{
    int x;
    int y;
    bool activo;
    int tipo;
    int direccion;
};

void iniciarEnemigo(Enemy* enemigo, int x, int y, int tipo);

void moverEnemigo(Enemy* enemigo, int jugadorX, int jugadorY);

#endif