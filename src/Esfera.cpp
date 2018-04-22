/*
 * Esfera.cpp
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#include "../include/Esfera.h"

Esfera::Esfera() {
	// TODO Auto-generated constructor stub

}

Esfera::~Esfera() {
	// TODO Auto-generated destructor stub
}

float Esfera::getArea() const {
	return area;
}

float Esfera::getVolume() const {
	return volume;
}

void Esfera::calcularArea(float& raio) {
	area = (4*(PI*(pow(raio, 2))));
}

void Esfera::calcularVolume(float& raio) {
	float num = (float)4/3;
	volume = (num *(PI*(pow(raio, 3))));
}

ostream& operator<<(ostream &o, Esfera const e){
	o << "Area da esfera: " << e.area << endl;
	o << "Volume da esfera: " <<  e.volume << endl;
	return o;
}
