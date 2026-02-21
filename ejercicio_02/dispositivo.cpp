#include "dispositivo.h"
#include <iostream>

DispositivoElectronico::DispositivoElectronico() {
    marca = "";
    modelo = "";
    precio = 0.0;
    existencia = 0;
}

DispositivoElectronico::DispositivoElectronico(std::string marca, std::string modelo, float precio, int existencia) {
    this->marca = marca;
    this->modelo = modelo;
    this->precio = precio;
    this->existencia = existencia;
}

void DispositivoElectronico::actualizarMarca(std::string nuevaMarca) { marca = nuevaMarca; }
void DispositivoElectronico::actualizarModelo(std::string nuevoModelo) { modelo = nuevoModelo; }
void DispositivoElectronico::actualizarPrecio(float nuevoPrecio) { 
    if(nuevoPrecio > 0) precio = nuevoPrecio; 
}
void DispositivoElectronico::actualizarExistencia(int nuevaExistencia) { existencia = nuevaExistencia; }

void DispositivoElectronico::mostrarInformacion() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Existencia: " << existencia << " unidades" << std::endl;
}

std::string DispositivoElectronico::obtenerMarca() { return marca; }
std::string DispositivoElectronico::obtenerModelo() { return modelo; }
float DispositivoElectronico::obtenerPrecio() { return precio; }
int DispositivoElectronico::obtenerExistencia() { return existencia; }