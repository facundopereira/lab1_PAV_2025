#include <stdio.h>
#include <stdlib.h>
#include "gato.h"
#include <string>

float Gato::ObtenerRacionDiaria(){
    return getPeso()*0,015;
}


Gato::Gato(string nombrei, Genero generoi, float pesoi,TipoPelo tipoPeloi){
    Mascota(nombrei,generoi,pesoi);
    tipoPelo=tipoPeloi;
}



TipoPelo Gato::getTipoPelo(){
    return tipoPelo;
}
void setTipoPelo(TipoPelo nuevoPelo){
    tipoPelo=nuevoPelo;
}

Gato::~Gato(){};
