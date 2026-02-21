#ifndef CELULAR_H
#define CELULAR_H

#include "dispositivo.h"

class Celular : public DispositivoElectronico {
private:
    std::string color;

public:
    // Constructores
    Celular();
    Celular(std::string marca, std::string modelo, std::string color, float precio, int existencia);

    // Método propio
    void actualizarColor(std::string nuevoColor);
    
    // Sobrescritura del método de la base
    void mostrarInformacion();

    // Getter propio
    std::string obtenerColor();
    
    // Método de utilidad
    bool tieneStock();
};

#endif // CELULAR_H