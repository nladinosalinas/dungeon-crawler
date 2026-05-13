#ifndef MAP_H
#define MAP_H

const int FILAS = 5;
const int COLUMNAS = 20;

extern char mapa[FILAS][COLUMNAS];
extern int habitacionActual;

void iniciarMapa();
void cargarHabitacion(int numero);

#endif