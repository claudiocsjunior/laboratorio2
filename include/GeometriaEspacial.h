/*
 * GeometriaEspacial.h
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#ifndef INCLUDE_GEOMETRIAESPACIAL_H_
#define INCLUDE_GEOMETRIAESPACIAL_H_
#include <string>

#include "Cubo.h"
#include "Esfera.h"
#include "Paralelepipedo.h"
#include "Piramide.h"

using namespace std;

class GeometriaEspacial {
private:
	Piramide piramide;
	Esfera esfera;
	Paralelepipedo paralelepipedo;
	Cubo cubo;
public:
	GeometriaEspacial();
	virtual ~GeometriaEspacial();

	const Paralelepipedo& getParalelepipedo() const;
	const Cubo& getCubo() const;
	const Esfera& getEsfera() const;
	const Piramide& getPiramide() const;

	void calcularPiramide(char* argv[]);
	void calcularCubo(char* argv[]);
	void calcularParalelepipedo(char* argv[]);
	void calcularEsfera(char* argv[]);
	void print(string &formaGeometrica);
};

#endif /* INCLUDE_GEOMETRIAESPACIAL_H_ */
