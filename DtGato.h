#include "DtMascota.h"
#include "TipoPelo.h"
#include <string>
#include <iostream>

class DtGato: public DtMascota{
    private:
        TipoPelo tipoPelo;
    public:
        TipoPelo getTipoPelo();
        DtGato(TipoPelo tipoPelo, std::string nombre, Genero genero, float peso, float racionDiaria);
        ~DtGato();
};