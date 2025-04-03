#include "DtMascota.h"
#include "DtGato.h"
#include "TipoPelo.h"
#include <string>
#include <iostream>

DtGato::DtGato(TipoPelo tipoPelo, std::string nombre, Genero genero, float peso, float racionDiaria)
    : DtMascota(nombre, genero, peso, racionDiaria), tipoPelo(tipoPelo) {}

TipoPelo DtGato::getTipoPelo(){
    return tipoPelo;
}
