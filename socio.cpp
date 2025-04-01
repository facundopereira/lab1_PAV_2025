#include "Socio.h"

// Constructor
Socio::Socio(std::string ci, std::string nombre, DtFecha fechaIngreso) : ci(ci), nombre(nombre), fechaIngreso(fechaIngreso) {}


// Getters
std::string Socio::getCi() const {
    return this->ci;
}

std::string Socio::getNombre() const {
    return this->nombre;
}


DtFecha Socio::getFechaIngreso() const {
    return this->fechaIngreso;
}

// Setters
void Socio::setCi(std::string ci) {
    this->ci = ci;
}

void Socio::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Socio::setFechaIngreso(DtFecha fechaIngreso) {
    this->fechaIngreso = fechaIngreso;
}


// Metodos
void Socio::agregarConsulta(Consulta* consulta) {
    consultas.push_back(consulta);
}

void Socio::listarConsultas() const {
    std::cout << "Consultas de " << nombre << " (" << ci << "):\n";
    for (Consulta* consulta : consultas) {
        std::cout << " - " << consulta->getFechaConsulta().toString()
                << " Motivo: " << consulta->getMotivo() << std::endl;
    }
}

// Destructor
Socio::~Socio() {
    for (Consulta* consulta : consultas) {
        delete consulta;
    }
    consultas.clear();
}
