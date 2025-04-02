

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

//void DtFecha::setDia(int d) {
//    dia = d; 
//}
//void DtFecha::setMes(int m) { 
//    mes = m; 
//}
//void DtFecha::setAno(int a) { 
//    ano = a;
//}

