#pragma once
#include "Mueble2D.h"


// Clase derivada para una silla
class Silla : public Mueble2D {
	// Asegura que el alto sea par

public:
    Silla(int alto, int largo);
    void Rendenizar() const override;
};

