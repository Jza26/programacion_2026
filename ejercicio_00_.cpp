#include <stdio.h>
#include <string.h>

// Definimos la estructura de forma simple
struct Estudiante {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    int activo; // 1 para si, 0 para no
};

int main() {
    struct Estudiante lista[100];
    int cantidadActual = 0;
    int opcion;

    do {
        printf("\n--- MENU DE ESTUDIANTES ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Buscar por codigo\n");
        printf("3. Mostrar todos\n");
        printf("4. Salir\n");
        printf("Seleccione: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (cantidadActual < 100) {
                printf("Nombre (sin espacios): ");
                scanf("%s", lista[cantidadActual].nombre);

                printf("Codigo: ");
                scanf("%s", lista[cantidadActual].codigo);

                printf("Edad: ");
                scanf("%d", &lista[cantidadActual].edad);

                printf("Promedio: ");
                scanf("%f", &lista[cantidadActual].promedio);

                printf("¿Esta activo? (1=Si / 0=No): ");
                scanf("%d", &lista[cantidadActual].activo);

                cantidadActual++;
                printf("Estudiante guardado.\n");
            } else {
                printf("Lista llena.\n");
            }
        } 
        else if (opcion == 2) {
            char buscar[20];
            int encontrado = 0;
            printf("Codigo a buscar: ");
            scanf("%s", buscar);

            for (int i = 0; i < cantidadActual; i++) {
                if (strcmp(lista[i].codigo, buscar) == 0) {
                    printf("\nNombre: %s", lista[i].nombre);
                    printf("\nPromedio: %.2f", lista[i].promedio);
                    printf("\nEstado: %s\n", lista[i].activo == 1 ? "Activo" : "Inactivo");
                    encontrado = 1;
                }
            }
            if (encontrado == 0) printf("No se encontro.\n");
        } 
        else if (opcion == 3) {
            for (int i = 0; i < cantidadActual; i++) {
                printf("\n--- Estudiante %d ---", i + 1);
                printf("\nNombre: %s", lista[i].nombre);
                printf("\nCodigo: %s", lista[i].codigo);
                printf("\nPromedio: %.2f\n", lista[i].promedio);
            }
        }

    } while (opcion != 4);

    printf("Fin del programa.\n");
    return 0;
}