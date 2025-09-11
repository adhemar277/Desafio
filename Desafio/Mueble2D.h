#pragma once

// Clase base abstracta para muebles en 2D
class Mueble2D {
	// Atributos protegidos para alto y largo
protected:
    int alto;
    int largo;


public:
    Mueble2D(int alto, int largo);
    virtual ~Mueble2D() = default;

	// Método puro virtual para renderizar el mueble
    virtual void Rendenizar() const = 0;
    int CalcularArea() const;
    int getAlto() const;
    int getLargo() const;
};


