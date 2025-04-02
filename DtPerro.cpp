#include "DtMascota.h"
#include "RazaPerro.h"
#include "DtPerro.h"
#include <iostream>
#include <string>
 
using namespace std;

RazaPerro DtPerro::getRazaPerro(){
    return raza;
}

bool DtPerro::getVacunaCachorro(){
    return vacunaCachorro;
}


DtPerro::DtPerro(RazaPerro raza, bool vacunaCachorro, std::string nombre, Genero genero, float peso, float racionDiaria)
    : DtMascota(nombre, genero, peso, racionDiaria), raza(raza), vacunaCachorro(vacunaCachorro) {}
