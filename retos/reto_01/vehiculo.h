#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    int anio;

public:
    // Constructores
    Vehiculo();
    Vehiculo(std::string marca, std::string modelo, int anio,std::string placa);

    // Métodos para actualizar
    void actualizarMarca(std::string nuevaMarca);
    void actualizarModelo(std::string nuevoModelo);
    void actualizarAnio(int nuevoAnio);
    void actualizarPlaca(std::string nuevoPlaca);

    // Métodos para mostrar
    virtual void mostrarInformacion();

    // Getters
    std::string obtenerMarca();
    std::string obtenerModelo();
    std::string obtenerPlaca();
    int obtenerAnio();

};

#endif // VEHICULO_H