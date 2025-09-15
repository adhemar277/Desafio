#pragma once
#include <vector>
#include "Mueble2D.h"

// Clase para gestionar y renderizar muebles en una grilla
class RenderManager {
	// Atributo privado: vector de punteros a Mueble2D
private:
    std::vector<Mueble2D*> muebles;
public:
    void AgregarMueble(Mueble2D* mueble);
    void RenderizarFilasColumnas(int filas, int columnas) const;
    ~RenderManager();
};