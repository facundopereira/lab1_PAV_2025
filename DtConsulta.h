

#ifndef DTCONSULTA_H
#define DTCONSULTA_H


#include <string>
#include "DtFecha.h"
using namespace std;


class DtConsulta {
public:
     DtConsulta(DtFecha fecha, string motivo);
    ~DtConsulta();

    DtFecha getFechaConsulta() ;
    string getMotivo() ;

   // void setFechaConsulta(DtFecha fecha);
   // void setMotivo(string motivo);
    
private:
 DtFecha fechaConsulta;
    string motivo;
    
};

#endif /* DTCONSULTA_H */

