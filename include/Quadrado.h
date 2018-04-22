/**
* @file   Quadrado.h
* @brief  Classe responsável pelo calculo da área e perimétro do Quadrado
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_QUADRADO_H_ /**< Verifica se a variável INCLUDE_QUADRADO_H_ foi definida*/
#define INCLUDE_QUADRADO_H_ /**< Define a variável INCLUDE_QUADRADO_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
#include <cmath> /**< Inclusão da biblioteca cmath*/
using namespace std;

class Quadrado {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float perimetro; /**< Variável para guardar o valor do perimetro*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Quadrado(); /**< Construtor da Classe*/
	virtual ~Quadrado(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para a Área
	* @return atributo área
	*/
	float getArea() const;

	/**
	* @brief Método de acesso para o perimetro
	* @return atributo perímetro
	*/
	float getPerimetro() const;

	/**
	* @brief Efetua o calculo da área
	* @param[in] lado para efetuar o calculo
	*/
	void calcularArea(float &lado);

	/**
	* @brief Efetua o calculo do perímetro
	* @param[in] lado para efetuar o calculo
	*/
	void calcularPerimetro(float &lado);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Quadrado const q);

};

#endif
