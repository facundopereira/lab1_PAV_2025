#include <stdio.h>
#include <stdlib.h>
#include "mascota.h"
#include <string>


class gato : public Mascota{
    private:
        TipoPelo tipoPelo;
    public:
        TipoPelo getTipoPelo();
        void setTipoPelo(TipoPelo);
        Gato(string nombrei, Genero generoi, float pesoi,TipoPelo tipoPeloi);
        float ObtenerRacionDiaria();
        ~Gato();
}
