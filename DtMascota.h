#ifndef DTMASCOTA_H 
#define DTMASCOTA_H

#include <string>
//#include "genero.h"

class DtMascota {
    protected:
        std::string nombre;
        //Genero genero; //<<enum>> creado por Antonio mister musculo 
        float peso;
        float racionDiaria;
    public:
        DtMascota(std::string nombre, /*Genero genero,*/ float peso, float racionDiaria);
        virtual ~DtMascota();
        virtual void mostrarInfo() const;
};


#endif