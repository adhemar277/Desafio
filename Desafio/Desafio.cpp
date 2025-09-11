// Desafio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Silla.h"
#include "Mesa.h"
 
// Funcion principal
int main() {

	// Dibuja una silla de alto 2 y largo 1
    std::cout << "Silla (alto, largo):\n";
    Silla silla(2, 1);
    silla.Rendenizar();
    std::cout << "Area: " << silla.CalcularArea() << "\n\n";
 
	// Dibuja una mesa de alto 2 y largo 4
    std::cout << "Mesa (alto, largo):\n";
    Mesa mesa(3, 5);
    mesa.Rendenizar();
    std::cout << "Area: " << mesa.CalcularArea() << "\n";

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
