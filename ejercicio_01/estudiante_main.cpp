#include <iostream>
#include "estudiante.h"

using namespace std;

int main() {
    cout << "=== Sistema de Gestion de Estudiantes ===" << endl << endl;

    // 1. Crear estudiante con constructor por defecto
    Estudiante est1;
    cout << "Estudiante 1 (Recien creado):" << endl;
    est1.mostrarInformacionCompleta();

    // 2. Actualizar atributos
    est1.actualizarNombre("Manolo Sanchez");
    est1.actualizarCodigo("A00123");
    est1.actualizarEdad(20);
    est1.actualizarPromedio(8.5);
    est1.actualizarActivo(true);

    // 3. Mostrar información actualizada
    cout << "\nEstudiante 1 (Despues de actualizar):" << endl;
    est1.mostrarInformacionCompleta();

    // 4. Crear otro estudiante con parámetros
    Estudiante est2("Maria Posada", "B00456", 22, 9.5, true);
    
    // 5. Mostrar información completa
    cout << "\nEstudiante 2 (Constructor con parametros):" << endl;
    est2.mostrarInformacionCompleta();

    // 6. Incrementar edad
    cout << "\nIncrementando edad de Maria..." << endl;
    est2.incrementarEdad();
    est2.mostrarEdad();

    // 7. Calcular estado académico
    est2.calcularEstadoAcademico();

    // 8. Intentar actualizar promedio inválido
    cout << "\nIntentando asignar promedio de 15.0 a Manolo..." << endl;
    est1.actualizarPromedio(15.0);

    return 0;
}