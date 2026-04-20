#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

class Mensaje {
private:
    std::string texto;
    std::string emisor;
    std::string timestamp;

    std::string generarTimestamp();

public:
    Mensaje(std::string t, std::string e);

    std::string getFormattedMessage() const;
    std::string getTexto() const { return texto; }
    std::string getEmisor() const { return emisor; }
    std::string getTimestamp() const { return timestamp; }
};

#endif
