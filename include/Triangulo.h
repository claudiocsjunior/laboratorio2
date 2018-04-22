/*
 * Triangulo.h
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_TRIANGULO_H_
#define INCLUDE_TRIANGULO_H_

#include <stdlib.h>
#include <iostream>
using namespace std;

class Triangulo {
private:
	float area;
	float perimetro;
public:
	Triangulo();
	virtual ~Triangulo();
	
	float getArea() const;
	float getPerimetro() const;
	
	void calcularArea(float &base, float &altura);
	void calcularPerimetro(float &lado1, float &lado2, float &lado3);
	friend ostream& operator<<(ostream &o, Triangulo const t);

};

#endif /* INCLUDE_TRIANGULO_H_ */
