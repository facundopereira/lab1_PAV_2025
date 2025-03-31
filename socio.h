#ifndef SOCIO_H
#define SOCIO_H

#include "DtFecha.h" 
#include <string>


class Socio {
private:
    std::string ci;
    std::string nombre;
    DtFecha fechaIngreso;

public:
    // Constructor
    Socio(std::string ci, std::string nombre, DtFecha fechaIngreso);

    // Getters
    std::string getCi() const;
    std::string getNombre() const;
    DtFecha getFechaIngreso() const;

    // Setters
    void setCi(std::string ci);
    void setNombre(std::string nombre);
    void setFechaIngreso(DtFecha fechaIngreso);
};

#endif
