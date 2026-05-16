#ifndef MAP_H
#define MAP_H

const int FILAS = 7;
const int COLUMNAS = 25;

extern char mapa[FILAS][COLUMNAS];
extern int habitacionActual;

void iniciarMapa();
void cargarHabitacion(int numero);

#endif
