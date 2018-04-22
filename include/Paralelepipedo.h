/*
 * Paralelepipedo.h
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_PARALELEPIPEDO_H_
#define INCLUDE_PARALELEPIPEDO_H_

#include <iostream>
using namespace std;

class Paralelepipedo {
private:
	float area;
	float volume;
public:
	Paralelepipedo();
	virtual ~Paralelepipedo();

	float getArea() const;
	float getVolume() const;

	void calcularArea(float &aresta1, float &aresta2, float &aresta3);
	void calcularVolume(float &aresta1, float &aresta2, float &aresta3);
	friend ostream& operator<<(ostream &o, Paralelepipedo const p);
};

#endif /* INCLUDE_PARALELEPIPEDO_H_ */
