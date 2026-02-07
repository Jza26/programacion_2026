#include "estudiante.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Estudiante::Estudiante() {
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0;
    activo = false;
}

// Constructor con parámetros
Estudiante::Estudiante(string n, string c, int e, float p, bool a) {
    nombre = n;
    codigo = c;
    edad = e;
    activo = a;
    // Usamos el setter para aprovechar la validación del promedio
    actualizarPromedio(p);
}

// Implementación de Setters
void Estudiante::actualizarNombre(string n) { nombre = n; }
void Estudiante::actualizarCodigo(string c) { codigo = c; }
void Estudiante::actualizarEdad(int e) { edad = e; }
void Estudiante::actualizarActivo(bool a) { activo = a; }

void Estudiante::actualizarPromedio(float p) {
    if (p >= 0.0 && p <= 10.0) {
        promedio = p;
    } else {
        cout << "Error: Promedio " << p << " invalido. Debe estar entre 0 y 10." << endl;
    }
}

// Implementación de Getters
string Estudiante::obtenerNombre() { return nombre; }
string Estudiante::obtenerCodigo() { return codigo; }
int Estudiante::obtenerEdad() { return edad; }
float Estudiante::obtenerPromedio() { return promedio; }
bool Estudiante::obtenerActivo() { return activo; }

// Métodos de Visualización
void Estudiante::mostrarNombre() { cout << "Nombre: " << nombre << endl; }
void Estudiante::mostrarCodigo() { cout << "Codigo: " << codigo << endl; }
void Estudiante::mostrarEdad() { cout << "Edad: " << edad << " años" << endl; }
void Estudiante::mostrarPromedio() { cout << "Promedio: " << promedio << endl; }
void Estudiante::mostrarActivo() { 
    cout << "Estado: " << (activo ? "Activo" : "Inactivo") << endl; 
}

void Estudiante::mostrarInformacionCompleta() {
    cout << "-----------------------------" << endl;
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
    cout << "-----------------------------" << endl;
}

// Métodos de Utilidad
void Estudiante::incrementarEdad() { edad++; }

void Estudiante::calcularEstadoAcademico() {
    cout << "Estado Academico: ";
    if (promedio >= 9.0) cout << "Excelente";
    else if (promedio >= 8.0) cout << "Muy Bueno";
    else if (promedio >= 7.0) cout << "Bueno";
    else if (promedio >= 6.0) cout << "Regular";
    else cout << "Necesita Mejorar";
    cout << endl;
}