/**
* @file   GeometriaEspacial.h
* @brief  Classe responsável por gerenciar os calculos da geometria espacial
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_GEOMETRIAESPACIAL_H_ /**< Verifica se a variável INCLUDE_GEOMETRIAESPACIAL_H_ foi definida*/
#define INCLUDE_GEOMETRIAESPACIAL_H_ /**< Define a variável INCLUDE_GEOMETRIAESPACIAL_H_ */
#include <string> /**< Inclusão da biblioteca string*/

#include "Cubo.h" /**< Inclusão da classe Cubo.h*/
#include "Esfera.h" /**< Inclusão da Classe Esfera.h*/
#include "Paralelepipedo.h" /**< Inclusão da Classe Paralelepipedo.h*/
#include "Piramide.h" /**< Inclusão da Classe Piramide.h*/

using namespace std;

class GeometriaEspacial {
private: /**< Local para declaração de métodos e atributos privados*/
	Piramide piramide; /**< Variável para guardar o valor da pirâmide*/
	Esfera esfera; /**< Variável para guardar o valor da esfera*/
	Paralelepipedo paralelepipedo; /**< Variável para guardar o valor do paralelepipedo*/
	Cubo cubo; /**< Variável para guardar o valor do cubo*/
public:
	GeometriaEspacial(); /**< Construtor da Classe*/
	virtual ~GeometriaEspacial(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para o atributo paralelepipedo
	* @return atributo paralelepipedo
	*/
	const Paralelepipedo& getParalelepipedo() const;

	/**
	* @brief Método de acesso para o atributo cubo
	* @return atributo cubo
	*/
	const Cubo& getCubo() const;

	/**
	* @brief Método de acesso para o atributo esfera
	* @return atributo esfera
	*/
	const Esfera& getEsfera() const;

	/**
	* @brief Método de acesso para o atributo pirâmide
	* @return atributo pirâmide
	*/
	const Piramide& getPiramide() const;

	/**
	* @brief Efetua os calculos relacionados a pirâmide
	* @param[in] Recebe os atributos passados como parâmtros na execução
	*/
	void calcularPiramide(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ao cubo
	* @param[in] Recebe os atributos passados como parâmtros na execução
	*/
	void calcularCubo(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ao paralelepipedo
	* @param[in] Recebe os atributos passados como parâmtros na execução
	*/
	void calcularParalelepipedo(char* argv[]);

	/**
	* @brief Efetua os calculos relacionados ầ esfera
	* @param[in] Recebe os atributos passados como parâmtros na execução
	*/
	void calcularEsfera(char* argv[]);

	/**
	* @brief Efetua o print dos calculos
	* @param[in] string contendo a forma geométrica
	*/
	void print(string &formaGeometrica);
};

#endif
