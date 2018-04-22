/*
 * Paralelepipedo.cpp
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#include "../include/Paralelepipedo.h"

Paralelepipedo::Paralelepipedo() {
	// TODO Auto-generated constructor stub

}

Paralelepipedo::~Paralelepipedo() {
	// TODO Auto-generated destructor stub
}

float Paralelepipedo::getArea() const {
	return area;
}

float Paralelepipedo::getVolume() const {
	return volume;
}

void Paralelepipedo::calcularArea(float& aresta1, float& aresta2, float& aresta3) {
	area = (2*(aresta1 * aresta2))+(2*(aresta1 * aresta3))+(2*(aresta2 * aresta3));
}

void Paralelepipedo::calcularVolume(float& aresta1, float& aresta2, float& aresta3) {
	volume = (aresta1 * aresta2 * aresta3);
}

ostream& operator<<(ostream &o, Paralelepipedo const p){
	o << "Area do paralelepipedo: " << p.area << endl;
	o << "Volume do paralelepipedo: " <<  p.volume << endl;
	return o;
}
