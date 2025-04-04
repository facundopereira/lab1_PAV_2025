#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "perro.h"

float Perro::ObtenerRacionDiaria(){
    return getPeso()*0,025;
}

void Perro::Perro(string nombre, Genero genero, float peso,RazaPerro razai,bool estaVacunado){
    Mascota( nombre,genero,peso);
    raza=razai;
    vacunaCachorro= estaVacunado;
}

RazaPerro Perro::getRaza(){
    return raza;
}

bool Perro::getVacunaCachorro(){
    return vacunaCachorro;
}

void Perro::setRaza(RazaPerro nuevaRaza){
    raza=nuevaRaza;
}
void Perro::setvacunaCachorro(bool nuevo){
    vacunaCachorro=nuevo;
}
Perro::~Perro(){};
