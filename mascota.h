#include <stdio.h>
#include <stdlib.h>
#include <string>
#ifndef Mascota_H
#define Mascota_H
using namespace std;

class Mascota{
	private:
		string nombre;
		Genero genero;
		float peso;
	public:
		string getNombre();
		float getPeso();
		Genero getGenero();
		void setNombre(string);
		void setPeso(float);
		void setGenero(Genero);
		Mascota(string,Genero,float);
		virtual float ObtenerRacionDiaria()=0;
		~Mascota();

};

#endif
