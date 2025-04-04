#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "mascota.h"

Mascota::Mascota(std::string nombrei,Genero generoi,float x){
	nombre=nombrei;
	genero=generoi;
	peso=x;
}

string Mascota::getNombre(){
	return nombre;
}
float Mascota::getPeso(){
	return peso;
}
Genero Mascota::getGenero(){
	return genero;
}
void Mascota::setNombre(string nuevoNombre){
	nombre=nuevoNombre;
}
void Mascota::setPeso(float nuevoPeso){
	peso=nuevoPeso;
}
void Mascota::setGenero(Genero nuevoGenero){
	genero=nuevoGenero;
}

Mascota::~Mascota(){}
