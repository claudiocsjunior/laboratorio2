/*
 * Retangulo.cpp
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#include "../include/Retangulo.h"

Retangulo::Retangulo() {
	// TODO Auto-generated constructor stub

}

Retangulo::~Retangulo() {
	// TODO Auto-generated destructor stub
}

float Retangulo::getArea() const {
	return area;
}

float Retangulo::getPerimetro() const {
	return perimetro;
}

void Retangulo::calcularArea(float& base, float& altura) {
	area = (base * altura);
}

void Retangulo::calcularPerimetro(float& base, float& altura) {
	perimetro = 2*(base + altura);
}

ostream& operator<<(ostream &o, Retangulo const r){
	o << "Área do retângulo: " << r.area << endl;
	o << "Perimetro do retângulo: " <<  r.perimetro << endl;
	return o;
}
