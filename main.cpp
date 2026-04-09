#include <iostream>
#include "ganador.h"

int main() {
	char tabla[3][3] = {
		{'#', '#', '#'},
		{'#', '#', '#'},
		{'#', '#', '#'}
	};
	const char J1 = 'O', J2 = 'X';
	int x, y,jugador = 1, a = 1;
	bool fin = true;
	while (fin) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << tabla[i][j] << "   ";
		}
		std::cout << '\n' << std::endl;
	}
    fin = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (tabla[i][j] == '#') {
				fin = true;
			}
		}
	}
    if (ver_ganador(tabla)) {
        break;
    }
    if (fin == false) {
        break;
    }
	std::cout << "ingresa la cordenada y: ";
	std::cin >> y;
	std::cout << "ingresa la cordenada x: ";
	std::cin >> x;
	if (tabla[y-1][x-1] == '#') {
	    if (jugador == 1) {
	    tabla[y-1][x-1] = J1;
	    } else {
		tabla[y-1][x-1] = J2;
	    }
	} else {
		std::cout << "ERROR, esa posicion esta ocupada\n\n";
		jugador = (jugador == 1) ? 2 : 1;
	}
	jugador = (jugador == 1) ? 2 : 1;
	}
	return 0;
}

