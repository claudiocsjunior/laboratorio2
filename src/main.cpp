/**
* @file   main.cpp
* @brief  Responsável por iniciar o projeto
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include <iostream> /**< Inclusão da biblioteca iostream*/
#include <cstdlib> /**< Inclusão da biblioteca cstdlib*/
#include "../include/GeometriaPlana.h" /**< Inclusão da classe geometria plana*/
#include "../include/GeometriaEspacial.h" /**< Inclusão da classe geometria Espacial*/
#include <string.h> /**< Inclusão da biblioteca string*/
#include <typeinfo> /**< Inclusão da biblioteca typeinfo*/
#include <cmath> /**< Inclusão da biblioteca cmath*/
using namespace std;

/**
* @brief Método que incia o projeto
* @param[in] argc - total de argumentos passados
* @param[in] argv[] - os argumentos
* @return atributo 0
*/
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
