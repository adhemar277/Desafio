#include "Silla.h"
#include <iostream>

// Constructor que asegura que el alto sea par
Silla::Silla(int alto, int largo) : Mueble2D(alto, largo) {

    // El alto debe ser par
    if (alto % 2 != 0) {
        this->alto = alto + 1;
    }
}

// Renderiza la silla en la consola o pantalla
void Silla::Rendenizar() const {

    // Dibuja la silla: dos palitos de alto y uno de largo
    for (int i = 0; i < alto; ++i) {
        if (i < alto - 1) {
            std::cout << "|";
            for (int j = 1; j < largo; ++j) std::cout << " ";
            std::cout << "|" << std::endl;
        }
        else {
            for (int j = 0; j < largo; ++j) std::cout << "-";
            std::cout << std::endl;
        }
    }
}


