// Implementa la clase Mueble2D
#include "Mueble2D.h"
#include <iostream>

// Constructor que inicializa el alto y largo del mueble
Mueble2D::Mueble2D(int alto, int largo) : alto(alto), largo(largo) {}

// Calcula el área del mueble
int Mueble2D::CalcularArea() const {
    return alto * largo;
}

// Getters para alto y largo
int Mueble2D::getAlto() const {
    return alto;
}
int Mueble2D::getLargo() const {
    return largo;
}



