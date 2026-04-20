#include "Mensaje.h"
#include <ctime>

Mensaje::Mensaje(std::string t, std::string e) : texto(t), emisor(e) {
    timestamp = generarTimestamp();
}

std::string Mensaje::generarTimestamp() {
    time_t now = time(0);
    char buf[80];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", localtime(&now));
    return std::string(buf);
}

std::string Mensaje::getFormattedMessage() const {
    return "[" + timestamp + "] " + emisor + ": " + texto;
}
