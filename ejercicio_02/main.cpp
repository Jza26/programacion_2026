#include <iostream>
#include "dispositivo.h"
#include "celular.h"

int main() {
    std::cout << "=== TIENDA DE DISPOSITIVOS ===" << std::endl << std::endl;

    // 1. Crear un Celular con constructor de parámetros
    Celular miCelular("Apple", "iPhone 15", "Azul", 999.99, 10);
    std::cout << "Celular 1 creado:" << std::endl;
    miCelular.mostrarInformacion();

    // 2. Probar herencia de métodos (usar setter de la base en objeto hijo)
    std::cout << "\nActualizando precio y color..." << std::endl;
    miCelular.actualizarPrecio(899.99); // Método de la base
    miCelular.actualizarColor("Negro");  // Método propio
    miCelular.mostrarInformacion();

    // 3. Demostrar uso de Getters heredados y propios
    std::cout << "\nResumen rápido:" << std::endl;
    std::cout << "Dispositivo: " << miCelular.obtenerMarca() << " " << miCelular.obtenerModelo() << std::endl;
    std::cout << "Disponible: " << (miCelular.tieneStock() ? "SÍ" : "NO") << std::endl;

    return 0;
}