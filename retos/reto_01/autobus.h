#ifndef AUTOBUS_H
#define AUTOBUS_H
#include "vehiculo.h"

class Autobus : public Vehiculo {
private:
    int pasajeros;

public:
// Constructores
    Autobus();
    Autobus(std::string marca, std::string modelo, int anio, std::string placa, int pasajeros);
 // Métodos para actualizar
    void actualizarPasajeros(int nuevosPasajeros);
    // Sobrescritura del método de la clase base
    void mostrarInformacion();
};
#endif