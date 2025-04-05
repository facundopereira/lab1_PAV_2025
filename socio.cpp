#include "socio.h"

#include <iostream>


// Constructor
Socio::Socio(std::string ci, std::string nombre, DtFecha fechaIngreso) : ci(ci), nombre(nombre), fechaIngreso(fechaIngreso), topeConsulta(0), topeMascota(1) {}


// Getters
std::string Socio::getCi() {
    return this->ci;
}

std::string Socio::getNombre() {
    return this->nombre;
}


DtFecha Socio::getFechaIngreso() {
    return this->fechaIngreso;
}

int Socio::getTopeConsulta() {
    return this->topeConsulta;
}

int Socio::getTopeMascota() {
    return this->topeMascota;
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

void Socio::setTopeConsulta(int topeConsulta) {
    this->topeConsulta = topeConsulta;
}

void Socio::setTopeMascota(int topeMascota) {
    this->topeMascota = topeMascota;
}


// Metodos
void Socio::agregarConsulta(Consulta* consulta) {
    int tope = getTopeConsulta();

    if ( tope < 20 ) {
        consultas[tope] = consulta;
        tope++;

        setTopeConsulta(tope);
    } else {
        std::cout << "El socio supero el tope de consultas" << std::endl;
    }
}



void Socio::listarConsultas() {
    std::cout << "Listado de consultas del socio " << this->nombre << " con CI " << this->ci << ": " << std::endl;

    if ( this->topeConsulta > 0 ) {
        for ( int i = 0; i < this->topeConsulta; i++) {
            if (this->consultas[i] != nullptr) { 
                std::cout << "Motivo de la Consulta: " << this->consultas[i]->getMotivo() << std::endl;
                std::cout << "Fecha: "
                << this->consultas[i]->getFechaConsulta().getDia() << "/"
                << this->consultas[i]->getFechaConsulta().getMes() << "/"
                << this->consultas[i]->getFechaConsulta().getAno() << std::endl;
            }
        }
    } else {
        std::cout << "El socio no tiene consultas asociadas " << std::endl;
    }
}

void Socio::agregarMascota(Mascota* mascota) {
    int tope = getTopeMascota();

    if ( tope < 10 ) {
        mascotas[tope] = mascota;
        tope++;

        setTopeMascota(tope);
    } else {
        std::cout << "El socio supero el tope de mascotas" << std::endl;
    }
}

void Socio::listarMascotas() {
    std::cout << "Listado de mascotas del socio " << this->nombre << " con CI " << this->ci << ": " << std::endl;

    if ( this->topeMascota > 0 ) {
        for ( int i = 0; i < this->topeMascota; i++) {
            if (this->mascota[i] != nullptr) { 
                // FALTA IMPLEMENTACION
            }
        }
    } else {
        std::cout << "El socio no tiene mascotas asociadas " << std::endl;
    }
}

// Destructor
Socio::~Socio() {
    if ( this->topeConsulta > 0 ) {
        for ( int i = 0; i < this->topeConsulta; i++ ) {
            if ( this->consultas[i] != nullptr ) {
                delete this->consultas[i];
            }
        }
    }

    if ( this->topeMascota > 0 ) {
        for ( int i = 0; i < this->topeMascota; i++ ) {
            if ( this->mascotas[i] != nullptr ) {
                delete this->mascotas[i];
            }
        }
    }

    std::cout << "Destructor de Socio ejecutado correctamente." << std::endl;
}

