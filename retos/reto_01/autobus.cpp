#include "autobus.h"
#include <iostream>

// Constructor por defecto: llama al constructor por defecto de Vehiculo

Autobus::Autobus() : Vehiculo() {
    pasajeros = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base

Autobus::Autobus(std::string marca, std::string modelo, int anio, std::string placa, int pasajeros)
    : Vehiculo(marca, modelo, anio, placa) {
    this->pasajeros = pasajeros;
}

// Método para actualizar

void Autobus::actualizarPasajeros(int nuevosPasajeros) {
    pasajeros = nuevosPasajeros;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche

void Autobus::mostrarInformacion() {
    Vehiculo::mostrarInformacion(); // REQUISITO: Usa el del padre
    std::cout << "Pasajeros: " << pasajeros << std::endl;
}