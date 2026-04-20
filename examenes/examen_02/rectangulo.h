#include "figura.h"
#include <iostream>

class Rectangulo : public Figura {
private:
    double base, altura;

public:
    Rectangulo(std::string n, double b, double h) : Figura(n), base(b), altura(h) {}

    double calcularArea() override {
        return base * altura;
    }

    void describir() override {
        std::cout << "Figura: " << nombre << " | Base: " << base << ", Altura: " << altura << std::endl;
    }
};