#include "DtMascota.h"
#include <iostream>
#include <string>

DtMascota::DtMascota(std::string nombre, /*Genero genero,*/ float peso, float racionDiaria)
    :nombre(nombre), /*Genero(genero)*/ peso(peso), racionDiaria(racionDiaria){}

DtMascota::~DtMascota(){}

void DtMascota::mostrarInfo() const {
    std::cout << "Nombre: " <<nombre << "/n";

    std::string generoStr;
    /*switch (genero){
        case Genero::MACHO: generoStr = "Macho"; break;
        case Genero::HEMBRA: generoStr = "HEMBRA"; break;
    }*/
   std::cout << "Género: " << generoStr <<"/n";
   std::cout << "Peso: " << peso <<"/n";
   std::cout << "Ración Diaria: " << racionDiaria <<"/n";
}