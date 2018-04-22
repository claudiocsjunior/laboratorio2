/*
 * Esfera.h
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_ESFERA_H_
#define INCLUDE_ESFERA_H_

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415

class Esfera {
private:
	float area;
	float volume;
public:
	Esfera();
	virtual ~Esfera();

	float getArea() const;
	float getVolume() const;

	void calcularArea(float &raio);
	void calcularVolume(float &raio);
	friend ostream& operator<<(ostream &o, Esfera const e);
};

#endif /* INCLUDE_ESFERA_H_ */
