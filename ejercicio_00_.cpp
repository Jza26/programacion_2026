#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ESTUDIANTES 100
#define MAX_NOMBRE 100
#define MAX_CODIGO 20

// Estructura de Estudiante
typedef struct {
    char nombre[MAX_NOMBRE];
    char codigo[MAX_CODIGO];
    int edad;
    float promedio;
    bool activo;
} Estudiante;

// --- Métodos para actualizar ---

void actualizarNombre(Estudiante *e, char nuevoNombre[]) {
    strcpy(e->nombre, nuevoNombre);
    // Eliminar el salto de línea que deja fgets
    e->nombre[strcspn(e->nombre, "\n")] = 0;
}

void actualizarCodigo(Estudiante *e, char nuevoCodigo[]) {
    strcpy(e->codigo, nuevoCodigo);
    e->codigo[strcspn(e->codigo, "\n")] = 0;
}

void actualizarEdad(Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        e->promedio = nuevoPromedio;
    } else {
        printf("Error: El promedio debe estar entre 0.0 y 10.0\n");
    }
}

void actualizarActivo(Estudiante *e, bool nuevoEstado) {
    e->activo = nuevoEstado;
}

// --- Métodos de visualización ---

void mostrarNombre(Estudiante e) { printf("Nombre: %s\n", e.nombre); }
void mostrarCodigo(Estudiante e) { printf("Codigo: %s\n", e.codigo); }
void mostrarEdad(Estudiante e) { printf("Edad: %d anos\n", e.edad); }
void mostrarPromedio(Estudiante e) { printf("Promedio: %.2f\n", e.promedio); }
void mostrarActivo(Estudiante e) { printf("Estado: %s\n", e.activo ? "Activo" : "Inactivo"); }

void mostrarInformacionCompleta(Estudiante e) {
    printf("\n--- Informacion del Estudiante ---\n");
    mostrarNombre(e);
    mostrarCodigo(e);
    mostrarEdad(e);
    mostrarPromedio(e);
    mostrarActivo(e);
    printf("----------------------------------\n");
}

// --- Programa Principal ---

int main() {
    Estudiante lista[MAX_ESTUDIANTES];
    int cantidadActual = 0;
    int opcion;

    do {
        printf("\n--- SISTEMA DE GESTION ACADEMICA ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante en especifico (por Codigo)\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer

        switch (opcion) {
            case 1:
                if (cantidadActual < MAX_ESTUDIANTES) {
                    char tempNombre[MAX_NOMBRE], tempCodigo[MAX_CODIGO];
                    int tempEdad;
                    float tempPromedio;
                    int tempActivo;

                    printf("Ingrese nombre completo: ");
                    fgets(tempNombre, MAX_NOMBRE, stdin);
                    actualizarNombre(&lista[cantidadActual], tempNombre);

                    printf("Ingrese codigo: ");
                    fgets(tempCodigo, MAX_CODIGO, stdin);
                    actualizarCodigo(&lista[cantidadActual], tempCodigo);

                    printf("Ingrese edad: ");
                    scanf("%d", &tempEdad);
                    actualizarEdad(&lista[cantidadActual], tempEdad);

                    printf("Ingrese promedio (0.0 - 10.0): ");
                    scanf("%f", &tempPromedio);
                    actualizarPromedio(&lista[cantidadActual], tempPromedio);

                    printf("¿Esta activo? (1 para Si, 0 para No): ");
                    scanf("%d", &tempActivo);
                    actualizarActivo(&lista[cantidadActual], tempActivo == 1);

                    cantidadActual++;
                    printf("¡Estudiante agregado con exito!\n");
                } else {
                    printf("Error: Limite de estudiantes alcanzado.\n");
                }
                break;

            case 2: {
                char buscarCodigo[MAX_CODIGO];
                bool encontrado = false;
                printf("Ingrese el codigo del estudiante a buscar: ");
                fgets(buscarCodigo, MAX_CODIGO, stdin);
                buscarCodigo[strcspn(buscarCodigo, "\n")] = 0;

                for (int i = 0; i < cantidadActual; i++) {
                    if (strcmp(lista[i].codigo, buscarCodigo) == 0) {
                        mostrarInformacionCompleta(lista[i]);
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) printf("Estudiante no encontrado.\n");
                break;
            }

            case 3:
                if (cantidadActual == 0) {
                    printf("No hay estudiantes registrados.\n");
                } else {
                    for (int i = 0; i < cantidadActual; i++) {
                        mostrarInformacionCompleta(lista[i]);
                    }
                }
                break;

            case 4:
                printf("Saliendo del sistema...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}