/**
* @file   GeometriaPlana.cpp
* @brief  Responsável pelo gerenciamento das figuras planas
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/
#include "../include/GeometriaPlana.h" /**< Inclusão da Classe Geometria Plana*/

/**
* @brief Construtor do objeto
*/
GeometriaPlana::GeometriaPlana() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Método de acesso para o círculo
* @return atributo circulo
*/
Circulo GeometriaPlana::getCirculo(){
	return circulo;
}

/**
* @brief Método de acesso para o quadrado
* @return atributo quadrado
*/
Quadrado GeometriaPlana::getQuadrado(){
	return quadrado;
}

/**
* @brief Método de acesso para o retângulo
* @return atributo retângulo
*/
Retangulo GeometriaPlana::getRetangulo(){
	return retangulo;
}

/**
* @brief Método de acesso para o triângulo
* @return atributo triângulo
*/
Triangulo GeometriaPlana::getTriangulo(){
	return triangulo;
}

/**
* @brief Gerência os métodos para execução dos cálculos para o retângulo
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
void GeometriaPlana::calcularRetangulo(char* argv[]) {
	float base, altura;
	base = atof(argv[2]);
	altura = atof(argv[3]);

	Retangulo retangulo_;
	retangulo_.calcularArea(base, altura);
	retangulo_.calcularPerimetro(base, altura);
	retangulo = retangulo_;
}

/**
* @brief Gerência os métodos para execução dos cálculos para o quadrado
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
void GeometriaPlana::calcularQuadrado(char* argv[]) {
	float lado;
	lado = atof(argv[2]);

	Quadrado quadrado_;
	quadrado_.calcularArea(lado);
	quadrado_.calcularPerimetro(lado);
	quadrado = quadrado_;
}

/**
* @brief Efetua o print dos calculos de acordo com a forma geométrica
* @param[in] string contendo a forma geométrica
*/
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

/**
* @brief Gerência os métodos para execução dos cálculos para o triângulo
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
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

/**
* @brief Destrutor do objeto
*/
GeometriaPlana::~GeometriaPlana() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Gerência os métodos para execução dos cálculos para o circulo
* @param[in] Recebe os atributos passados como parâmtros na execução
*/
void GeometriaPlana::calcularCirculo(char* argv[]) {
	float raio;
	raio = atof(argv[2]);

	Circulo circulo_;
	circulo_.calcularArea(raio);
	circulo_.calcularPerimetro(raio);
	circulo = circulo_;
}
