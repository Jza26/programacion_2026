#ifndef CAMION_H
#define CAMION_H
#include "vehiculo.h"

class Camion : public Vehiculo {
private:
    float capacidadCarga;

public:
    // Constructores
    Camion();
    Camion(std::string marca, std::string modelo, int anio, std::string placa, float capacidadCarga);
    // Métodos para actualizar
    void actualizarCapacidad(float nuevaCapacidad);
    // Sobrescritura del método de la clase base
    void mostrarInformacion();
};
#endif