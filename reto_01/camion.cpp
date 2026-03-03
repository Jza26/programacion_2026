#include "camion.h"
#include <iostream>


// Constructor por defecto: llama al constructor por defecto de Vehiculo

Camion::Camion() : Vehiculo() {
    capacidadCarga = 0.0f;
}

// Constructor con parámetros: pasa los datos del vehículo a la base

Camion::Camion(std::string marca, std::string modelo, int anio, std::string placa, float capacidadCarga)
    : Vehiculo(marca, modelo, anio, placa) {
    this->capacidadCarga = capacidadCarga;
}

// Método para actualizar

void Camion::actualizarCapacidad(float nuevaCapacidad) {
    capacidadCarga = nuevaCapacidad;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche

void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion(); 
    std::cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << std::endl;
}