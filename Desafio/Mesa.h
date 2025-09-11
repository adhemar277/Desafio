#pragma once
#include "Mueble2D.h"

// Clase derivada para una mesa
class Mesa : public Mueble2D {

// Publico
public:
    Mesa(int alto, int largo);
    void Rendenizar() const override;
};



