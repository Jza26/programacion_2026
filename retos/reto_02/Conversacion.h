#ifndef CONVERSACION_H
#define CONVERSACION_H

#include "Mensaje.h"
#include <vector>
#include <string>

class Conversacion {
private:
    std::vector<Mensaje> historial;
    std::string idConversacion;
    std::string usuario;

public:
    Conversacion(std::string id, std::string user);

    void agregarMensaje(std::string texto, std::string emisor);
    void verHistorial() const;
    void exportarATexto(const std::string& archivo) const;
    int TotalMensajes() const;
};

#endif
