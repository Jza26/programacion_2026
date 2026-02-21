#include "celular.h"
#include <iostream>

// Constructor por defecto: inicializa el color y llama al padre
Celular::Celular() : DispositivoElectronico() {
    color = "Sin color";
}

// Constructor (parámetros): los datos comunes pasan a DispositivoElectronico
Celular::Celular(std::string marca, std::string modelo, std::string color, float precio, int existencia)
    : DispositivoElectronico(marca, modelo, precio, existencia) {
    this->color = color;
}

void Celular::actualizarColor(std::string nuevoColor) {
    color = nuevoColor;
}

// Reutiliza mostrarInformacion() de la base y agrega el color
void Celular::mostrarInformacion() {
    std::cout << "--- Datos del Celular ---" << std::endl;
    DispositivoElectronico::mostrarInformacion();
    std::cout << "Color: " << color << std::endl;
    std::cout << "-------------------------" << std::endl;
}

std::string Celular::obtenerColor() { return color; }

bool Celular::tieneStock() { return existencia > 0; }