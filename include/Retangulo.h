/**
* @file   Retangulo.h
* @brief  Classe responsável pelo calculo da área e perimétro do Retangulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_RETANGULO_H_ /**< Verifica se a variável INCLUDE_RETANGULO_H_ foi definida*/
#define INCLUDE_RETANGULO_H_ /**< Define a variável INCLUDE_RETANGULO_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
using namespace std;

class Retangulo {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float perimetro; /**< Variável para guardar o valor do perimetro*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Retangulo(); /**< Construtor da Classe*/
	virtual ~Retangulo(); /**< Destrutor da Classe*/

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
	* @param[in] base para efetuar o calculo
	* @param[in] altura para efetuar o calculo
	*/
	void calcularArea(float &base, float &altura);

	/**
	* @brief Efetua o calculo do perímetro
	* @param[in] base para efetuar o calculo
	* @param[in] altura para efetuar o calculo
	*/
	void calcularPerimetro(float &base, float &altura);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Retangulo const r);
};

#endif /* INCLUDE_RETANGULO_H_ */
