/*
 * Piramide.cpp
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#include "../include/Piramide.h"

Piramide::Piramide() {
	// TODO Auto-generated constructor stub

}

float Piramide::getArea() const {
	return area;
}

float Piramide::getVolume() const {
	return volume;
}

Piramide::~Piramide() {
	// TODO Auto-generated destructor stub
}

void Piramide::calcularArea(float& areaBase, float& areaLateral) {
	area = areaBase + areaLateral;
}

void Piramide::calcularVolume(float& areaBase, float& altura) {
	volume = (float)((areaBase * altura)/3);
}

ostream& operator<<(ostream &o, Piramide const p){
	o << "Area da pirâmide: " << p.area << endl;
	o << "Volume da pirâmide: " <<  p.volume << endl;
	return o;
}
