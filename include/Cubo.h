/*
 * Cubo.h
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_CUBO_H_
#define INCLUDE_CUBO_H_

#include <iostream>
using namespace std;
#include <cmath>

class Cubo {
private:
	float area;
	float volume;
public:
	Cubo();
	virtual ~Cubo();

	float getArea() const;
	float getVolume() const;

	void calcularArea(float &aresta);
	void calcularVolume(float &aresta);
	friend ostream& operator<<(ostream &o, Cubo const c);
};

#endif /* INCLUDE_CUBO_H_ */
