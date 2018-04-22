/*
 * GeometriaEspacial.cpp
 *
 *  Created on: 21/04/2018
 *      Author: claudio
 */

#include "../include/GeometriaEspacial.h"

GeometriaEspacial::GeometriaEspacial() {
	// TODO Auto-generated constructor stub

}

const Cubo& GeometriaEspacial::getCubo() const {
	return cubo;
}

const Esfera& GeometriaEspacial::getEsfera() const {
	return esfera;
}

const Piramide& GeometriaEspacial::getPiramide() const {
	return piramide;
}

GeometriaEspacial::~GeometriaEspacial() {
	// TODO Auto-generated destructor stub
}

void GeometriaEspacial::calcularPiramide(char* argv[]) {
	float areaBase, areaLateral, altura;
	areaBase = atof(argv[2]);
	areaLateral = atof(argv[3]);
	altura = atof(argv[4]);

	Piramide piramide_;
	piramide_.calcularArea(areaBase, areaLateral);
	piramide_.calcularVolume(areaBase, altura);
	piramide = piramide_;
}

const Paralelepipedo& GeometriaEspacial::getParalelepipedo() const {
	return paralelepipedo;
}

void GeometriaEspacial::calcularCubo(char* argv[]) {
	float aresta;
	aresta = atof(argv[2]);

	Cubo cubo_;
	cubo_.calcularArea(aresta);
	cubo_.calcularVolume(aresta);
	cubo = cubo_;
}

void GeometriaEspacial::calcularParalelepipedo(char* argv[]) {
	float aresta1, aresta2, aresta3;
	aresta1 = atof(argv[2]);
	aresta2 = atof(argv[3]);
	aresta3 = atof(argv[4]);

	Paralelepipedo paralelepipedo_;
	paralelepipedo_.calcularArea(aresta1, aresta2, aresta3);
	paralelepipedo_.calcularVolume(aresta1, aresta2, aresta3);
	paralelepipedo = paralelepipedo_;
}

void GeometriaEspacial::print(string& formaGeometrica) {
	if(formaGeometrica == "piramide")
		cout << piramide;
	else if(formaGeometrica == "cubo")
		cout << cubo;
	else if(formaGeometrica == "paralelepipedo")
		cout << paralelepipedo;
	else if(formaGeometrica == "esfera")
		cout << esfera;
}

void GeometriaEspacial::calcularEsfera(char* argv[]) {
	float raio;
	raio = atof(argv[2]);

	Esfera esfera_;
	esfera_.calcularArea(raio);
	esfera_.calcularVolume(raio);
	esfera = esfera_;
}
