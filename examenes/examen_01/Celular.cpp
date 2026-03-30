#include "Celular.h"
#include <iostream>

// Implementación del constructor usando 'this->' para evitar ambigüedad
Celular::Celular(std::string marca, std::string modelo, std::string color, int existencia, float precio) {
    this->marca = marca;
    this->modelo = modelo;
    this->color = color;
    this->existencia = existencia;
    this->precio = precio;
}

// Método 1: Visualización de información
void Celular::mostrarDetalles() {
    std::cout << "--- Información del Dispositivo ---" << std::endl;
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Existencias: " << existencia << " unidades" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}

// Método 2: Setter con Validación (no permite precios negativos)
void Celular::actualizarPrecio(float nuevoPrecio) {
    if (nuevoPrecio > 0) {
        precio = nuevoPrecio;
        std::cout << "Precio actualizado con éxito." << std::endl;
    } else {
        std::cout << "Error: El precio debe ser mayor a cero." << std::endl;
    }
}

// Método 3: Utilidad (Verifica si hay productos disponibles)
bool Celular::tieneStock() {
    return existencia > 0;
}