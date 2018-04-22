/*
 * Triangulo.cpp
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#include "../include/Triangulo.h"

Triangulo::Triangulo() {
	// TODO Auto-generated constructor stub
	area = 0;
	perimetro = 0;
}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

float Triangulo::getArea() const {
	return area;
}

float Triangulo::getPerimetro() const {
	return perimetro;
}

void Triangulo::calcularArea(float &base, float &altura){
	area = ((base * altura)/2);
}

void Triangulo::calcularPerimetro(float &lado1, float &lado2, float &lado3){
	perimetro = (lado1 + lado2 + lado3);
}

ostream& operator<<(ostream &o, Triangulo const t){
	o << "Area do triangulo: " << t.area << endl;
	o << "Perimetro do triangulo: " <<  t.perimetro << endl;
	return o;
}
