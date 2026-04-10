#include <iostream>
#include "funciones.h"
#include "utilidades.h"


int main() {
	char tabla[4][4] = {
        {' ', '1', '2', '3'},
		{'1', '#', '#', '#'},
		{'2', '#', '#', '#'},
		{'3', '#', '#', '#'}
	};
	const char J1 = 'O', J2 = 'X';
	int horizontal, vertical,jugador = 1;
	bool fin = false, entrada_valida = false;
    utils::clear();
	while (!fin) {
        ver_tabla(tabla);
        fin = seguir_juego(tabla);
        if (ver_ganador(tabla, (jugador == 2) ? J1 : J2)) {
            std::cout << "gano el jugador " << jugador << std::endl;
            break;
        }
        if (fin == true) {
            break;
        }
        entrada_valida = false;
        while (!entrada_valida) {
	        vertical = pedir_cordenada("vertical");
	        horizontal = pedir_cordenada("horizontal");
            if ((vertical < 1 || vertical > 3) || (horizontal < 1 || horizontal > 3)) {
                entrada_valida = false;
                std::cout << "ERROR, esos valores no son accesibles" << std::endl;
                std::cout << "por favor ingresa solo cordenadas entre el 1 y el 3" << std::endl;
                utils::sleep(0.35);
                utils::clear();
                ver_tabla(tabla);
            } else {
                entrada_valida = true;
            }
        }
	    if (tabla[vertical][horizontal] == '#') {
	        if (jugador == 1) {
	        tabla[vertical][horizontal] = J1;
	        } else {
		        tabla[vertical][horizontal] = J2;
	        }
            utils::sleep(0.35);
            utils::clear();
	    } else {
		    std::cout << "ERROR, esa posicion esta ocupada\n\n";
		    jugador = (jugador == 1) ? 2 : 1;
            utils::sleep(0.35);
            utils::clear();
	    }
	    jugador = (jugador == 1) ? 2 : 1;
	}
	return 0;
}
