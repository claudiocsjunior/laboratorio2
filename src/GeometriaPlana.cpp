/*
 * GeometriaPlana.cpp
 *
 *  Created on: 20/04/2018
 *      Author: claudio
 */

#include "../include/GeometriaPlana.h"

GeometriaPlana::GeometriaPlana() {
	// TODO Auto-generated constructor stub

}

Circulo GeometriaPlana::getCirculo(){
	return circulo;
}

Quadrado GeometriaPlana::getQuadrado(){
	return quadrado;
}

Retangulo GeometriaPlana::getRetangulo(){
	return retangulo;
}

Triangulo GeometriaPlana::getTriangulo(){
	return triangulo;
}

void GeometriaPlana::calcularRetangulo(char* argv[]) {
	float base, altura;
	base = atof(argv[2]);
	altura = atof(argv[3]);

	Retangulo retangulo_;
	retangulo_.calcularArea(base, altura);
	retangulo_.calcularPerimetro(base, altura);
	retangulo = retangulo_;
}

void GeometriaPlana::calcularQuadrado(char* argv[]) {
	float lado;
	lado = atof(argv[2]);

	Quadrado quadrado_;
	quadrado_.calcularArea(lado);
	quadrado_.calcularPerimetro(lado);
	quadrado = quadrado_;
}

void GeometriaPlana::print(string &formaGeometrica){
	if(formaGeometrica == "triangulo")
		cout << triangulo;
	else if(formaGeometrica == "retangulo")
		cout << retangulo;
	else if(formaGeometrica == "quadrado")
		cout << quadrado;
	else if(formaGeometrica == "circulo")
		cout << circulo;
}

void GeometriaPlana::calcularTriangulo(char* argv[]){
	float base, altura, lado1, lado2, lado3;
	base = atof(argv[2]);
	altura = atof(argv[3]);
	lado1 = atof(argv[4]);
	lado2 = atof(argv[5]);
	lado3 = atof(argv[6]);

	Triangulo triangulo_;
	triangulo_.calcularArea(base, altura);
	triangulo_.calcularPerimetro(lado1, lado2, lado3);
	triangulo = triangulo_;
}


GeometriaPlana::~GeometriaPlana() {
	// TODO Auto-generated destructor stub
}

void GeometriaPlana::calcularCirculo(char* argv[]) {
	float raio;
	raio = atof(argv[2]);

	Circulo circulo_;
	circulo_.calcularArea(raio);
	circulo_.calcularPerimetro(raio);
	circulo = circulo_;
}
