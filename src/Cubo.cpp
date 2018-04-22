/*
 * Cubo.cpp
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#include "../include/Cubo.h"

Cubo::Cubo() {
	// TODO Auto-generated constructor stub

}

Cubo::~Cubo() {
	// TODO Auto-generated destructor stub
}

float Cubo::getArea() const {
	return area;
}

float Cubo::getVolume() const {
	return volume;
}

void Cubo::calcularArea(float& aresta) {
	area  = 6*(pow(aresta, 2));
}

void Cubo::calcularVolume(float& aresta) {
	volume = pow(aresta, 3);
}

ostream& operator<<(ostream &o, Cubo const c){
	o << "Area do cubo: " << c.area << endl;
	o << "Volume do cubo: " <<  c.volume << endl;
	return o;
}
