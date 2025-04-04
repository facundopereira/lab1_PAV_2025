#ifndef SOCIO_H
#define SOCIO_H

#include "DtFecha.h" 
#include "Consulta.h"
#include <string>


class Socio {
    private:
        std::string ci;
        std::string nombre;
        DtFecha fechaIngreso;
        Consulta* consultas[20];
        Mascota* mascota[10];
        int topeConsulta, topeMascota;

    public:
        // Constructor
        Socio(std::string ci, std::string nombre, DtFecha fechaIngreso, Mascota* mascota);

        // Getters
        std::string getCi();
        std::string getNombre();
        DtFecha getFechaIngreso();
        int getTopeConsulta();
        int getTopeMascota();

        // Setters
        void setCi(std::string ci);
        void setNombre(std::string nombre);
        void setFechaIngreso(DtFecha fechaIngreso);

        // Metodos
        void agregarConsulta(Consulta* consulta);
        void listarConsultas();

        void agregarMascota(Mascota* mascota);
        void listarMascotas();

        // Destructor
        virtual ~Socio();
};

#endif
