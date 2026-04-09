#include "ganador.h"
bool ver_ganador(const char (&tabla)[3][3]) {
    if (tabla[0][0] == 'O' && tabla[0][1] == 'O' && tabla[0][2] == 'O') {
        return true;
    } else if (tabla[0][0] == 'O' && tabla[1][0] == 'O' && tabla[2][0] == 'O') {
        return true;
    } else {
        return false;
    }
}
