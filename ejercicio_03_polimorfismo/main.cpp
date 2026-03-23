#include "figura.h"
#include "circulo.h"
#include "rectangulo.h"
#include <iostream>
#include <vector>

int main() {
    // Crear objetos usando polimorfismo
    std::vector<Figura*> figuras;
    figuras.push_back(new Circulo("Circulo1", 5.0));
    figuras.push_back(new Rectangulo("Rectangulo1", 4.0, 3.0));
    figuras.push_back(new Circulo("Circulo2", 3.0));

    // Mostrar información usando métodos virtuales
    for (auto figura : figuras) {
        figura->describir();
        std::cout << "Area: " << figura->calcularArea() << std::endl;
        std::cout << std::endl;
    }

    // Liberar memoria
    for (auto figura : figuras) {
        delete figura;
    }

    return 0;
}