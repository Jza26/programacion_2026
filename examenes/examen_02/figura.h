#ifndef FIGURA_H
#define FIGURA_H
#include <string>

class Figura {
protected:
    std::string nombre;

public:
    Figura(std::string n) : nombre(n) {}
    virtual ~Figura() {} // Destructor virtual para evitar fugas de memoria

    // Métodos polimórficos
    virtual double calcularArea() = 0; 
    virtual void describir() = 0;
};
#endif