#ifndef SOCIO_H
#define SOCIO_H

#include "DtFecha.h" 
#include "Consulta.h"
#include <string>
#include <vector>


class Socio {
    private:
        std::string ci;
        std::string nombre;
        DtFecha fechaIngreso;
        std::vector<Consulta*> consultas;

    public:
        // Constructor
        Socio(std::string ci, std::string nombre, DtFecha fechaIngreso);

        // Getters
        std::string getCi() const;
        std::string getNombre() const;
        DtFecha getFechaIngreso() const;

        // Setters
        void setCi(std::string ci);
        void setNombre(std::string nombre);
        void setFechaIngreso(DtFecha fechaIngreso);

        // Metodos
        void agregarConsulta(Consulta* consulta);
        void listarConsultas() const;

        // Destructor
        virtual ~Socio();
};

#endif
