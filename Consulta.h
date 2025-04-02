#ifndef CONSULTA_H
#define CONSULTA_H

#include "DtFecha.h" 
#include <string>


class Consulta {
    private:
        std::string motivo;
        DtFecha fechaConsulta;

    public:
        // Constructor
        Consulta(std::string motivo, DtFecha fechaConsulta);

        // Getters
        std::string getMotivo();
        DtFecha getFechaConsulta();

        // Setters
        void setMotivo(std::string motivo);
        void setFechaConsulta(DtFecha fechaConsulta);

        // Destructor
        virtual ~Consulta();
};

#endif
