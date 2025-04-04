#include <stdio.h>
#include <stdlib.h>
#include "mascota.h"
#include <string>

class Perro : public Mascota{
    private:
        RazaPerro raza;
        bool vacunaCachorro;
    public:
        RazaPerro getRaza();
        bool getVacunaCachorro();
        void setRaza(RazaPerro);
        void setvacunaCachorro(bool);
        Perro(string nombrei,Genero generoi,float pesoi,RazaPerro razai,bool estaVacunado);
        float ObtenerRacionDiaria();
        bool getVacunaCachorro();
        ~Perro();

};

