#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    // Atributos privados para mantener el encapsulamiento
    std::string marca;
    std::string modelo;
    std::string color;
    int existencia;
    float precio;

public:
    // Constructor 
    Celular(std::string marca, std::string modelo, std::string color, int existencia, float precio);

    // Métodos 
    void mostrarDetalles();               
    void actualizarPrecio(float nuevoPrecio); 
    bool tieneStock();                    
};

#endif // CELULAR_H