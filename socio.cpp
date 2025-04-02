#include "Socio.h"

#include <iostream>


// Constructor
Socio::Socio(std::string ci, std::string nombre, DtFecha fechaIngreso, Mascota* mascota) : ci(ci), nombre(nombre), fechaIngreso(fechaIngreso), mascota(mascota), topeConsulta(0), topeMascota(1) {}


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
    return this->TopeConsulta;
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

void setTopeConsulta(int topeConsulta) {
    this->topeConsulta = topeConsulta;
}

void setTopeMascota(int topeMascota) {
    this->topeMascota = topeMascota;
}


// Metodos
void Socio::agregarConsulta(Consulta* consulta) {
    int tope = getTopeConsulta();

    if ( tope <= 20 ) {
        consultas[tope] = consulta;
        tope++;

        setTopeConsulta(tope);
    } else {
        std::cout << "El socio supero el tope de consultas" << std::endl;
    }
}

void Socio::listarConsultas() {
}

void Socio::agregarMascota(Mascota* mascota) {
    int tope = getTopeConsulta();

    if ( tope <= 10 ) {
        mascotas[tope] = mascota;
        tope++;

        setTopeMascota(tope);
    } else {
        std::cout << "El socio supero el tope de mascotas" << std::endl;
    }
}

void Socio::listarMascotas() {
}

// Destructor
Socio::~Socio() {
    for (Consulta* consulta : consultas) {
        if (consulta) {
            delete consulta;
        }
    }
    consultas.clear();
}

