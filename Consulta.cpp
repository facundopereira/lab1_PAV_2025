#include "Consulta.h"
#include <iostream>


// Constructor
Consulta::Consulta(std::string motivo, DtFecha fechaConsulta) : motivo(motivo), fechaConsulta(fechaConsulta) {}


// Getters
std::string Consulta::getMotivo() const {
    return this->motivo;
}

DtFecha Consulta::getFechaConsulta() const {
    return this->fechaConsulta;
}

// Setters
void Consulta::setMotivo(std::string motivo) {
    this->motivo = motivo;
}

void Consulta::setFechaConsulta(DtFecha fechaConsulta) {
    this->fechaConsulta = fechaConsulta;
}

// Destructor
Consulta::~Consulta() {}