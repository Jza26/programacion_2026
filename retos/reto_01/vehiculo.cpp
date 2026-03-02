#include "vehiculo.h"
#include <iostream>

// Constructor por defecto
Vehiculo::Vehiculo() {
    marca = "";
    modelo = "";
    placa = "s/p";
    anio = 0;
}

// Constructor con parámetros
Vehiculo::Vehiculo(std::string marca, std::string modelo, int anio, std::string placa) {
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
    this->placa = placa;
}

// Métodos para actualizar
void Vehiculo::actualizarMarca(std::string nuevaMarca) {
    marca = nuevaMarca;
}

void Vehiculo::actualizarModelo(std::string nuevoModelo) {
    modelo = nuevoModelo;
}
void Vehiculo::actualizarPlaca(std::string nuevoPlaca) {
    placa = nuevoPlaca;
}

void Vehiculo::actualizarAnio(int nuevoAnio) {
    anio = nuevoAnio;
}

// Método para mostrar
void Vehiculo::mostrarInformacion() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
     std::cout << "Placa: " << placa << std::endl;
    std::cout << "Año: " << anio << std::endl;
}

// Getters
std::string Vehiculo::obtenerMarca() {
    return marca;
}

std::string Vehiculo::obtenerModelo() {
    return modelo;
}

std::string Vehiculo::obtenerPlaca() { 
    return placa; 
}

int Vehiculo::obtenerAnio() {
    return anio;
}