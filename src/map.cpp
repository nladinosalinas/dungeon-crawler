#include "../include/map.h"

char habitaciones [2][FILAS][COLUMNAS] =
{
    {

    
    "###################",
    "#..................",
    "#.................#",
    "#.................#",
    "###################"
},

{
    "###################",
    "#....######.......#",
    "#.................#",
    "#.......######....#",
    "###################"
}

};

char mapa [FILAS][COLUMNAS];

int habitacionActual = 0;

void cargarHabitacion(int numero)
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            mapa [i][j] = habitaciones [numero][i][j];
        }
    }

    habitacionActual = numero;

}

void iniciarMapa()
{
    cargarHabitacion(0);
}