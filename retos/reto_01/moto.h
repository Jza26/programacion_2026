#ifndef MOTO_H
#define MOTO_H
#include "vehiculo.h"

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    // Constructores
    Moto();
    Moto(std::string marca, std::string modelo, int anio, std::string placa, int cilindrada);
    // Métodos para actualizar
    void actualizarCilindrada(int nuevaCilindrada);
   // Sobrescritura del método de la clase base
    void mostrarInformacion();
};
#endif