/**
* @file   GeometriaEspacial.cpp
* @brief  Responsável pelo gerenciamento das figuras espaciais
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include "../include/GeometriaEspacial.h" /**< Inclusão da Classe Geometria Espacial*/

/**
* @brief Construtor do objeto
*/
GeometriaEspacial::GeometriaEspacial() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Método de acesso para o cubo
* @return atributo cubo
*/
const Cubo& GeometriaEspacial::getCubo() const {
	return cubo;
}

/**
* @brief Método de acesso para a esfera
* @return atributo esfera
*/
const Esfera& GeometriaEspacial::getEsfera() const {
	return esfera;
}

/**
* @brief Método de acesso para a pirâmide
* @return atributo pirâmide
*/
const Piramide& GeometriaEspacial::getPiramide() const {
	return piramide;
}

/**
* @brief Destrutor do objeto
*/
GeometriaEspacial::~GeometriaEspacial() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Gerência os métodos para execução dos cálculos para a pirâmide
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
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

/**
* @brief Método de acesso para o paralelepipedo
* @return atributo paralelepipedo
*/
const Paralelepipedo& GeometriaEspacial::getParalelepipedo() const {
	return paralelepipedo;
}

/**
* @brief Gerência os métodos para execução dos cálculos para o cubo
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
void GeometriaEspacial::calcularCubo(char* argv[]) {
	float aresta;
	aresta = atof(argv[2]);

	Cubo cubo_;
	cubo_.calcularArea(aresta);
	cubo_.calcularVolume(aresta);
	cubo = cubo_;
}

/**
* @brief Gerência os métodos para execução dos cálculos para o paralelepipedo
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
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

/**
* @brief Efetua o print dos calculos de acordo com a forma geométrica
* @param[in] string contendo a forma geométrica
*/
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

/**
* @brief Gerência os métodos para execução dos cálculos para a esfera
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
void GeometriaEspacial::calcularEsfera(char* argv[]) {
	float raio;
	raio = atof(argv[2]);

	Esfera esfera_;
	esfera_.calcularArea(raio);
	esfera_.calcularVolume(raio);
	esfera = esfera_;
}
