#include "figura.h"
#include <iostream>

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(std::string n, double r) : Figura(n), radio(r) {}

    double calcularArea() override {
        return 3.14159 * radio * radio;
    }

    void describir() override {
        std::cout << "Figura: " << nombre << " | Radio: " << radio << std::endl;
    }
};