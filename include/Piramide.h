/*
 * Piramide.h
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_PIRAMIDE_H_
#define INCLUDE_PIRAMIDE_H_

#include <iostream>
using namespace std;

class Piramide {
private:
	float area;
	float volume;
public:
	Piramide();
	virtual ~Piramide();

	float getArea() const;
	float getVolume() const;

	void calcularArea(float &areaBase, float &areaLateral);
	void calcularVolume(float &areaBase, float &altura);
	friend ostream& operator<<(ostream &o, Piramide const p);
};

#endif /* INCLUDE_PIRAMIDE_H_ */
