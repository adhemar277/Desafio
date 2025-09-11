#include "Mesa.h"
#include <iostream>

// Constructor que inicializa el alto y largo de la mesa
Mesa::Mesa(int alto, int largo) : Mueble2D(alto, largo) {}


// Renderiza la mesa en la consola o pantalla

void Mesa::Rendenizar() const {
    // Dibuja la mesa: dos palitos de alto y largo de ancho
    for (int i = 0; i < alto; ++i) {
        if (i == 0) {
            for (int j = 0; j < largo; ++j) std::cout << "-";
            std::cout << std::endl;
        }
		// Dibuja las filas intermedias con espacios
        else {
            std::cout << "|";
            for (int j = 1; j < largo - 1; ++j) std::cout << " ";
            if (largo > 1) std::cout << "|";
            std::cout << std::endl;
        }
    }
}


