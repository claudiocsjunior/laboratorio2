/*
 * Retangulo.h
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_RETANGULO_H_
#define INCLUDE_RETANGULO_H_

#include <stdlib.h>
#include <iostream>
using namespace std;

class Retangulo {
private:
	float area;
	float perimetro;
public:
	Retangulo();
	virtual ~Retangulo();

	float getArea() const;
	float getPerimetro() const;

	void calcularArea(float &base, float &altura);
	void calcularPerimetro(float &base, float &altura);
	friend ostream& operator<<(ostream &o, Retangulo const r);
};

#endif /* INCLUDE_RETANGULO_H_ */
