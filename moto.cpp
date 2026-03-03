#include "moto.h"
#include <iostream>

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Moto::Moto() : Vehiculo() {
    cilindrada = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base

Moto::Moto(std::string marca, std::string modelo, int anio, std::string placa, int cilindrada)
    : Vehiculo(marca, modelo, anio, placa) {
    this->cilindrada = cilindrada;
}

// Método para actualizar

void Moto::actualizarCilindrada(int nuevaCilindrada) {
    cilindrada = nuevaCilindrada;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche

void Moto::mostrarInformacion() {
    Vehiculo::mostrarInformacion(); 
    std::cout << "Cilindrada: " << cilindrada << "cc" << std::endl;
}