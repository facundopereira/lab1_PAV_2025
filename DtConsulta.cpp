
#include "DtConsulta.h"
using namespace std;



DtConsulta::DtConsulta(DtFecha fecha, string motivo) : fechaConsulta(fecha), motivo(motivo) {}

DtConsulta::~DtConsulta() {}

DtFecha DtConsulta::getFechaConsulta()  { 
    return fechaConsulta; 
}
string DtConsulta::getMotivo()  { 
    return motivo; 
}

//void DtConsulta::setFechaConsulta(DtFecha fecha) { 
//    fechaConsulta = fecha; 
//}
//void DtConsulta::setMotivo(string m) {
//    motivo = m;
//}

