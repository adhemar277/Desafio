#include "RenderManager.h"
#include <iostream>

// Agrega un mueble al vector de muebles
void RenderManager::AgregarMueble(Mueble2D* mueble) {
    muebles.push_back(mueble);
}

// Renderiza los muebles en una grilla de filas x columnas
void RenderManager::RenderizarFilasColumnas(int filas, int columnas) const {
    int total = muebles.size();
    int idx = 0;
    for (int f = 0; f < filas; ++f) {
        for (int c = 0; c < columnas; ++c) {
            if (idx < total) {
                std::cout << "Mueble [" << f << "," << c << "]:\n";
                muebles[idx]->Rendenizar();
                std::cout << std::endl;
                ++idx;
            }
        }
    }
}

// Destructor que libera la memoria de los muebles
RenderManager::~RenderManager() {
    for (auto m : muebles) {
        delete m;
    }
}