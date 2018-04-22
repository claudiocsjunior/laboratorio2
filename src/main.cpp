#include <iostream>
#include <cstdlib>
#include "../include/GeometriaPlana.h"
#include "../include/GeometriaEspacial.h"
#include <string.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]){
	if(argc > 1){
		int tamanho = strlen(argv[1]);
		string formaGeometrica;
		for(int i = 0; i < tamanho; i++){
			formaGeometrica += argv[1][i];
		}

		GeometriaPlana geocalcPlan;
		GeometriaEspacial geocalcEsp;
		string tipoImpressao;

		if(formaGeometrica == "triangulo" && argc == 7){
			geocalcPlan.calcularTriangulo(argv);
			tipoImpressao = "calculoPlano";
		}else if(formaGeometrica == "retangulo" && argc == 4){
			geocalcPlan.calcularRetangulo(argv);
			tipoImpressao = "calculoPlano";
		}else if(formaGeometrica == "quadrado" && argc == 3){
			geocalcPlan.calcularQuadrado(argv);
			tipoImpressao = "calculoPlano";
		}else if(formaGeometrica == "circulo" && argc == 3){
			geocalcPlan.calcularCirculo(argv);
			tipoImpressao = "calculoPlano";
		}else if(formaGeometrica == "piramide" && argc == 5){
			geocalcEsp.calcularPiramide(argv);
			tipoImpressao = "calculoEspacial";
		}else if(formaGeometrica == "cubo" && argc == 3){
			geocalcEsp.calcularCubo(argv);
			tipoImpressao = "calculoEspacial";
		}else if(formaGeometrica == "paralelepipedo" && argc == 5){
			geocalcEsp.calcularParalelepipedo(argv);
			tipoImpressao = "calculoEspacial";
		}else if(formaGeometrica == "esfera" && argc == 3){
			geocalcEsp.calcularEsfera(argv);
			tipoImpressao = "calculoEspacial";
		}else{
			cout << "USO INDEVIDO. EXECUTE O PROGRAMA SEM PARAMETROS PARA MAIS DETALHES" << endl;

		}

		if(tipoImpressao == "calculoPlano"){
			geocalcPlan.print(formaGeometrica);
		}else if(tipoImpressao == "calculoEspacial"){
			geocalcEsp.print(formaGeometrica);
		}
	}else{
		cout << "<<<<<INSTRUÇÕES DE USO>>>>>" << endl;
		cout << " - FIGURAS PLANAS:" << endl;
		cout << "   - triangulo base altura lado1 lado2 lado3"<< endl;
		cout << "   - retangulo base altura"<< endl;
		cout << "   - quadrado lado"<< endl;
		cout << "   - circulo raio"<< endl;
		cout << " - FIGURAS ESPACIAIS:" << endl;
		cout << "   - piramide areaBase areaLateral altura"<< endl;
		cout << "   - cubo aresta"<< endl;
		cout << "   - paralelepipedo aresta1 aresta2 aresta3"<< endl;
		cout << "   - esfera raio"<< endl;
	}

	return 0;
}
