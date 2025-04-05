

#include "DtFecha.h"

DtFecha::DtFecha(int d, int m, int a) : dia(d), mes(m), ano(a) {

}
DtFecha::~DtFecha() {

}


int DtFecha::getDia()  { 
    return dia; 
}


int DtFecha::getMes()  { 
    return mes; 

}
int DtFecha::getAno()  {
    return ano; 
}

std::string DtFecha::toString() const {
    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << dia << "/"
        << std::setfill('0') << std::setw(2) << mes << "/"
        << anio;
    return oss.str();
}

/*Solo le agregaría la de comparar:

bool DtFecha::operator<(DtFecha& otra) {
    if (anio < otra.anio) return true;
    if (anio == otra.anio && mes < otra.mes) return true;
    if (anio == otra.anio && mes == otra.mes && dia < otra.dia) return true;
    return false;
}

Nico Palleiro*/


//void DtFecha::setDia(int d) {
//    dia = d; 
//}
//void DtFecha::setMes(int m) { 
//    mes = m; 
//}
//void DtFecha::setAno(int a) { 
//    ano = a;
//}
