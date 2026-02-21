#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

#include <string>

class DispositivoElectronico {
protected:
    std::string marca;
    std::string modelo;
    float precio;
    int existencia;

public:
    // Constructores
    DispositivoElectronico();
    DispositivoElectronico(std::string marca, std::string modelo, float precio, int existencia);

    // Métodos actualizar (Setters)
    void actualizarMarca(std::string nuevaMarca);
    void actualizarModelo(std::string nuevoModelo);
    void actualizarPrecio(float nuevoPrecio);
    void actualizarExistencia(int nuevaExistencia);

    // Método información base
    void mostrarInformacion();

    // Getters
    std::string obtenerMarca();
    std::string obtenerModelo();
    float obtenerPrecio();
    int obtenerExistencia();
};

#endif // DISPOSITIVO_H