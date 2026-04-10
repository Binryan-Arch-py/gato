#ifndef GANADOR_H
#define GANADOR_H
bool ver_ganador(const char (&tabla)[4][4], const char FICHA);
void ver_tabla(const char (&tabla)[4][4]);
bool seguir_juego(const char (&tabla)[4][4]);
void limpiar_pantalla();
#endif
