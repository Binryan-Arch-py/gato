#include "funciones.h"
#include <iostream>

bool ver_ganador(const char (&tabla)[4][4], const char FICHA) {
    for (int i = 1; i <= 3; i++) {
        if (tabla[i][1] == FICHA && tabla[i][2] == FICHA && tabla[i][3] == FICHA) {
            return true;
        }
        if (tabla[1][i] == FICHA && tabla[2][i] == FICHA && tabla[3][i] == FICHA) {
            return true;
        }
    }
    if (tabla[1][1] == FICHA && tabla[2][2] == FICHA && tabla[3][3] == FICHA) {
        return true;
    }
    if (tabla[1][3] == FICHA && tabla[2][2] == FICHA && tabla[3][1] == FICHA) {
        return true;
    }
    return false;
}

void ver_tabla(const char (&tabla)[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << tabla[i][j] << "   ";
        }
        std::cout << '\n' << std::endl;
    }
}

bool seguir_juego(const char (&tabla)[4][4]) {
    bool fin = true;
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tabla[i][j] == '#') {
                fin = false;
            }
        }
    }
    return fin;
}

