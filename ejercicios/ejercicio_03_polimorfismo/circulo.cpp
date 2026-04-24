#include "circulo.h"
#include <iostream>
#include <cmath>

Circulo::Circulo(std::string nombre, double radio) : Figura(nombre), radio(radio) {}

double Circulo::calcularArea() {
    return M_PI * radio * radio; // <cmath>
}

void Circulo::describir() {
    std::cout << "Figura: " << nombre << ", Radio: " << radio << std::endl;
}

double Circulo::obtenerRadio() {
    return radio;
}