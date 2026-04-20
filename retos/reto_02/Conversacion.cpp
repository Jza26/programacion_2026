#include "Conversacion.h"
#include <iostream>
#include <fstream>

Conversacion::Conversacion(std::string id, std::string user) 
    : idConversacion(id), usuario(user) {}

void Conversacion::agregarMensaje(std::string texto, std::string emisor) {
    Mensaje msg(texto, emisor);
    historial.push_back(msg);
}

void Conversacion::verHistorial() const {
    for (const auto& msg : historial) {
        std::cout << msg.getFormattedMessage() << std::endl;
    }
}

void Conversacion::exportarATexto(const std::string& archivo) const {
    std::ofstream out(archivo);
    if (!out.is_open()) {
        std::cerr << "Error al abrir archivo: " << archivo << std::endl;
        return;
    }
    for (const auto& msg : historial) {
        out << msg.getFormattedMessage() << std::endl;
    }
    out.close();
}

int Conversacion::TotalMensajes() const {
    return historial.size();
}
