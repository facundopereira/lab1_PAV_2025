#ifndef DTMASCOTA_H 
#define DTMASCOTA_H
#include "Genero.h"

using namespace std;
#include <string>

class DtMascota {
    private:
        string nombre;
        Genero genero;
        float peso;
        float racionDiaria;
    public:
        string  getNombre();
        float getPeso();
        float getRacionDiaria();
        Genero getGenero();
        DtMascota(string nombre, Genero genero, float peso, float racionDiaria);
         ~DtMascota();
         void mostrarInfo() const;
};


#endif