#include "empleado_tiempo_completo.h"
#include <iostream>

// Constructor por defecto llama al padre por defecto
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto() : Empleado() {
    horasSemanales = 0;
    bono = 0.0;
}

// Constructor con parámetros: envía datos a la clase base mediante lista de inicialización
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, 
                                               int horasSemanales, float bono)
    : Empleado(nombre, id, salarioBase) {
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

void EmpleadoTiempoCompleto::actualizarHorasSemanales(int nuevasHoras) { horasSemanales = nuevasHoras; }
void EmpleadoTiempoCompleto::actualizarBono(float nuevoBono) { bono = nuevoBono; }

int EmpleadoTiempoCompleto::obtenerHorasSemanales() { return horasSemanales; }
float EmpleadoTiempoCompleto::obtenerBono() { return bono; }

float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    // Acceso directo a salarioBase porque es 'protected' en la base
    return salarioBase + bono;
}

void EmpleadoTiempoCompleto::mostrarInformacion() {
    // Reutilizamos el método de la clase base
    Empleado::mostrarInformacion();
    std::cout << "Horas semanales: " << horasSemanales << std::endl;
    std::cout << "Bono: " << bono << std::endl;
}