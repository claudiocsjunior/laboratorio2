/*
 * GeometriaPlana.h
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_GEOMETRIAPLANA_H_
#define INCLUDE_GEOMETRIAPLANA_H_

#include <string>

#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"

using namespace std;

class GeometriaPlana {
private:
	Triangulo triangulo;
	Quadrado quadrado;
	Circulo circulo;
	Retangulo retangulo;
public:
	GeometriaPlana();
	virtual ~GeometriaPlana();

	Circulo getCirculo();
	Quadrado getQuadrado();
	Retangulo getRetangulo();
	Triangulo getTriangulo();

	void calcularTriangulo(char* argv[]);
	void calcularRetangulo(char* argv[]);
	void calcularQuadrado(char* argv[]);
	void calcularCirculo(char* argv[]);
	void print(string &formaGeometrica);
};

#endif /* INCLUDE_GEOMETRIAPLANA_H_ */
