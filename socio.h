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
        Mascota* mascotas[10];
        int topeConsulta, topeMascota;

    public:
        // Constructor
        Socio(std::string ci, std::string nombre, DtFecha fechaIngreso);

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
        void setTopeConsulta(int topeConsulta);
        void setTopeMascota(int topeMascota);

        // Metodos
        void agregarConsulta(Consulta* consulta);
        void listarConsultas();

        void agregarMascota(Mascota* mascota);
        void listarMascotas();

        // Destructor
        virtual ~Socio();
};

#endif
