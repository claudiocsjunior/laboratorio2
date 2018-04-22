/**
* @file   GeometriaPlana.h
* @brief  Classe responsável por gerenciar os cálculos da geometria plana
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_GEOMETRIAPLANA_H_ /**< Verifica se a variável INCLUDE_GEOMETRIAPLANA_H_ foi definida*/
#define INCLUDE_GEOMETRIAPLANA_H_ /**< Define a variável INCLUDE_GEOMETRIAPLANA_H_ */

#include <string> /**< Inclusão da biblioteca string*/

#include "Circulo.h" /**< Inclusão da classe Circulo.h*/
#include "Quadrado.h" /**< Inclusão da classe Quadrado.h*/
#include "Retangulo.h" /**< Inclusão da classe Retangulo.h*/
#include "Triangulo.h" /**< Inclusão da classe Triangulo.h*/

using namespace std;

class GeometriaPlana {
private: /**< Local para declaração de métodos e atributos privados*/
	Triangulo triangulo;  /**< Variável para guardar o valor para o triângulo*/
	Quadrado quadrado; /**< Variável para guardar o valor para o quadrado*/
	Circulo circulo;/**< Variável para guardar o valor para o circulo*/
	Retangulo retangulo; /**< Variável para guardar o valor para o retângulo*/
public:
	GeometriaPlana();  /**< Construtor da Classe*/
	virtual ~GeometriaPlana();  /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para o atributo cieculo
	* @return atributo circulo
	*/
	Circulo getCirculo();

	/**
	* @brief Método de acesso para o atributo quadrado
	* @return atributo quadrado
	*/
	Quadrado getQuadrado();

	/**
	* @brief Método de acesso para o atributo retângulo
	* @return atributo retângulo
	*/
	Retangulo getRetangulo();

	/**
	* @brief Método de acesso para o atributo triângulo
	* @return atributo triângulo
	*/
	Triangulo getTriangulo();

	/**
	* @brief Efetua os calculos relacionados ao triângulo
	* @param[in] Recebe os atributos passados como parâmtros na execução
	* @return
	*/
	void calcularTriangulo(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ao retângulo
	* @param[in] Recebe os atributos passados como parâmtros na execução
	* @return
	*/
	void calcularRetangulo(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ao quadrado
	* @param[in] Recebe os atributos passados como parâmtros na execução
	* @return
	*/
	void calcularQuadrado(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ao circulo
	* @param[in] Recebe os atributos passados como parâmtros na execução
	* @return
	*/
	void calcularCirculo(char* argv[]);

	/**
	* @brief Efetua o print dos calculos
	* @param[in] string contendo a forma geométrica
	* @return
	*/
	void print(string &formaGeometrica);
};

#endif
