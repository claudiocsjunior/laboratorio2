/*
 * Circulo.cpp
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#include "../include/Circulo.h"

Circulo::Circulo() {
	// TODO Auto-generated constructor stub

}

Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}

float Circulo::getArea() const {
	return area;
}

float Circulo::getPerimetro() const {
	return perimetro;
}

void Circulo::calcularArea(float raio) {
	area = (PI*(pow(raio, 2)));

}

void Circulo::calcularPerimetro(float raio) {
	perimetro = (2*(PI * raio));
}

ostream& operator<<(ostream &o, Circulo const c){
	o << "Area do circulo: " << c.area << endl;
	o << "Perimetro do circulo: " <<  c.perimetro << endl;
	return o;
}
