/*
 * Quadrado.cpp
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#include "../include/Quadrado.h"

Quadrado::Quadrado() {
	// TODO Auto-generated constructor stub

}

Quadrado::~Quadrado() {
	// TODO Auto-generated destructor stub
}

float Quadrado::getArea() const {
	return area;
}

float Quadrado::getPerimetro() const {
	return perimetro;
}

void Quadrado::calcularArea(float& lado) {
	area = pow(lado, 2);
}

void Quadrado::calcularPerimetro(float& lado) {
	perimetro = (4*lado);
}

ostream& operator<<(ostream &o, Quadrado const q){
	o << "Area do quadrado: " << q.area << endl;
	o << "Perimetro do quadrado: " <<  q.perimetro << endl;
	return o;
}
