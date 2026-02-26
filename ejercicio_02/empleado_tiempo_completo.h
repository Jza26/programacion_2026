#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    // Constructores
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, 
                           int horasSemanales, float bono);

    // Setters
    void actualizarHorasSemanales(int nuevasHoras);
    void actualizarBono(float nuevoBono);

    // Getters
    int obtenerHorasSemanales();
    float obtenerBono();

    // Sobrescritura de métodos
    void mostrarInformacion();
    float calcularSalarioTotal();
};

#endif // EMPLEADO_TIEMPO_COMPLETO_H