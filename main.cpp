#include <iostream>
#include "funciones.h"

int main() {
	char tabla[4][4] = {
        {' ', '1', '2', '3'},
		{'1', '#', '#', '#'},
		{'2', '#', '#', '#'},
		{'3', '#', '#', '#'}
	};
	const char J1 = 'O', J2 = 'X';
	int horizontal, vertical,jugador = 1;
	bool fin = false;
	while (!fin) {
        ver_tabla(tabla);
        fin = seguir_juego(tabla);
        if (ver_ganador(tabla, jugador)) {
            break;
        }
        if (fin == true) {
            break;
        }
        while (true) {
	        std::cout << "ingresa la cordenada vertical: ";
	        std::cin >> vertical;
	        std::cout << "ingresa la cordenada horizontal: ";
	        std::cin >> horizontal;
            if ((vertical < 1 || vertical > 3) || (horizontal < 1 || horizontal > 3)) {
                std::cout << "ERROR, esos valores no son accesibles" << std::endl;
                std::cout << "por favor ingresa solo cordenadas entre el 1 y el 3" << std::endl;
            } else {
                break;
            }
        }
	    if (tabla[vertical][horizontal] == '#') {
	        if (jugador == 1) {
	        tabla[vertical][horizontal] = J1;
	        } else {
		        tabla[vertical][horizontal] = J2;
	        }
	    } else {
		    std::cout << "ERROR, esa posicion esta ocupada\n\n";
		    jugador = (jugador == 1) ? 2 : 1;
	    }
	    jugador = (jugador == 1) ? 2 : 1;
	}
	return 0;
}
