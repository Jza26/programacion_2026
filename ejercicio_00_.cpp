#include <stdio.h>
#include <string.h>

// Definimos los limites
#define MAX 100

// Estructura simple
struct Estudiante {
    char nombre[50];
    char codigo[20];
    int edad;
    float promedio;
    int activo; // Usamos 1 para Si y 0 para No
};

int main() {
    struct Estudiante lista[MAX];
    int cantidad = 0;
    int opcion = 0;

    while (opcion != 4) {
        // Menu sencillo
        printf("\n--- MENU ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Buscar por codigo\n");
        printf("3. Mostrar todos\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        getchar(); // -> LIMPIAR BUFFER después de leer la opción

        if (opcion == 1) {
            if (cantidad < MAX) {
                printf("Nombre: ");
                gets(lista[cantidad].nombre); 

                printf("Codigo: ");
                scanf("%s", lista[cantidad].codigo);
                getchar(); // -> LIMPIAR BUFFER después de leer el código corto

                printf("Edad: ");
                scanf("%d", &lista[cantidad].edad);
                getchar(); // -> LIMPIAR BUFFER después de leer la edad

                printf("Promedio: ");
                scanf("%f", &lista[cantidad].promedio);
                getchar(); // -> LIMPIAR BUFFER después de leer el promedio
                
                // Validacion simple del promedio
                if (lista[cantidad].promedio < 0 || lista[cantidad].promedio > 10) {
                    printf("Promedio invalido, se pondra 0.\n");
                    lista[cantidad].promedio = 0;
                }

                printf("Activo (1=Si, 0=No): ");
                scanf("%d", &lista[cantidad].activo);
                getchar(); // -> LIMPIAR BUFFER después de leer activo

                cantidad++;
                printf("Guardado!\n");
            } else {
                printf("Lista llena.\n");
            }
        } 
        
        else if (opcion == 2) {
            char buscado[20];
            int encontrado = 0;
            printf("Codigo a buscar: ");
            scanf("%s", buscado);
            getchar(); // -> LIMPIAR BUFFER después de leer código a buscar

            for (int i = 0; i < cantidad; i++) {
                if (strcmp(lista[i].codigo, buscado) == 0) {
                    printf("Nombre: %s\n", lista[i].nombre);
                    printf("Promedio: %.2f\n", lista[i].promedio);
                    encontrado = 1;
                }
            }
            if (encontrado == 0) printf("No existe.\n");
        } 
        
        else if (opcion == 3) {
            for (int i = 0; i < cantidad; i++) {
                printf("\nEstudiante %d:\n", i + 1);
                printf("Nombre: %s\n", lista[i].nombre);
                printf("Codigo: %s\n", lista[i].codigo);
                printf("Estado: %d\n", lista[i].activo);
            }
        }
    }

    printf("Adios!\n");
    return 0;
}