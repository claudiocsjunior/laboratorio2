/*
 * Quadrado.h
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_QUADRADO_H_
#define INCLUDE_QUADRADO_H_

#include <iostream>
#include <cmath>
using namespace std;

class Quadrado {
private:
	float area;
	float perimetro;
public:
	Quadrado();
	virtual ~Quadrado();

	float getArea() const;
	float getPerimetro() const;

	void calcularArea(float &lado);
	void calcularPerimetro(float &lado);
	friend ostream& operator<<(ostream &o, Quadrado const q);

};

#endif /* INCLUDE_QUADRADO_H_ */
