#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include "moto.h"     
#include "camion.h"   
#include "autobus.h"  

int main() {
    std::cout << "=== reto_01: Cambio de placas ===" << std::endl;
    std::cout << std::endl; 

    // 1. Crear un Coche (Ahora con placa: "ABC-123")
    Coche miCoche("Toyota", "Corolla", 2022, "ABC-123", 4);
    std::cout << "Datos del Coche inicial:" << std::endl;
    miCoche.mostrarInformacion();
    std::cout << std::endl;

    // 2. Crear una Moto (Nueva clase)
    Moto miMoto("Yamaha", "MT-07", 2023, "66-MOT", 689);
    std::cout << "Datos de la Moto:" << std::endl;
    miMoto.mostrarInformacion();
    std::cout << std::endl;

    // 3. Crear un Camion (Nueva clase)
    Camion miCamion("Mercedes", "Actros", 2021, "TRK-999", 18.5);
    std::cout << "Datos del Camion:" << std::endl;
    miCamion.mostrarInformacion();
    std::cout << std::endl;

    // 4. Crear un Autobus (Nueva clase)
    Autobus miAutobus("Mercedes", "Citaro", 2024, "UAD-205", 50);
    std::cout << "Datos del Autobus:" << std::endl;
    miAutobus.mostrarInformacion();
    std::cout << std::endl;


    // GESTIÓN DE PLACAS 
    std::cout << "--- Realizando cambio de placas desde el main ---" << std::endl;
    
    // Cambiamos la placa del coche usando el método heredado de Vehiculo
    miCoche.actualizarPlaca("NUEVA-01");
    
    // Cambiamos la placa de la moto
    miMoto.actualizarPlaca("RETO-01");

    std::cout << "Coche con placa actualizada:" << std::endl;
    miCoche.mostrarInformacion();
    std::cout << "Moto con placa actualizada:" << std::endl;
    miMoto.mostrarInformacion();

    return 0;
}