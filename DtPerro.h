#include "DtMascota.h"
#include "RazaPerro.h"
#include <iostream>
#include <string>
 
using namespace std;

class DtPerro: public DtMascota{
    private:
        RazaPerro raza;
        bool vacunaCachorro;
    public:
        RazaPerro getRazaPerro();
        bool getVacunaCachorro;
        DtPerro(RazaPerro raza, bool vacunaCachorro);
        ~DtPerro();

};