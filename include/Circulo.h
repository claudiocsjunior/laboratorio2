/*
 * Circulo.h
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_CIRCULO_H_
#define INCLUDE_CIRCULO_H_
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415

class Circulo {
private:
	float area;
	float perimetro;
public:
	Circulo();
	virtual ~Circulo();

	float getArea() const;
	float getPerimetro() const;

	void calcularArea(float raio);
	void calcularPerimetro(float raio);
	friend ostream& operator<<(ostream &o, Circulo const c);
};

#endif /* INCLUDE_CIRCULO_H_ */
