#include <iostream>
#include <thread>
#include <chrono>
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
	bool fin = false, entrada_valida = false;
	while (!fin) {
        ver_tabla(tabla);
        fin = seguir_juego(tabla);
        if (ver_ganador(tabla, (jugador == 2) ? J1 : J2)) {
            break;
        }
        if (fin == true) {
            break;
        }
        entrada_valida = false;
        while (!entrada_valida) {
	        std::cout << "ingresa la cordenada vertical: ";
	        std::cin >> vertical;
	        std::cout << "ingresa la cordenada horizontal: ";
	        std::cin >> horizontal;
            if ((vertical < 1 || vertical > 3) || (horizontal < 1 || horizontal > 3)) {
                entrada_valida = false;
                std::cout << "ERROR, esos valores no son accesibles" << std::endl;
                std::cout << "por favor ingresa solo cordenadas entre el 1 y el 3" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(350));
                limpiar_pantalla();
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
            std::this_thread::sleep_for(std::chrono::milliseconds(350));
            limpiar_pantalla();
	    } else {
		    std::cout << "ERROR, esa posicion esta ocupada\n\n";
		    jugador = (jugador == 1) ? 2 : 1;
            std::this_thread::sleep_for(std::chrono::milliseconds(350));
            limpiar_pantalla();
	    }
	    jugador = (jugador == 1) ? 2 : 1;
	}
	return 0;
}
