/**
* @file   Triãngulo.h
* @brief  Classe responsável pelo calculo da área e perimétro do Triângulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_TRIANGULO_H_ /**< Verifica se a variável INCLUDE_TRIANGULO_H_ foi definida*/
#define INCLUDE_TRIANGULO_H_ /**< Define a variável INCLUDE_TRIANGULO_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
using namespace std;

class Triangulo {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float perimetro; /**< Variável para guardar o valor do perimetro*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Triangulo(); /**< Construtor da Classe*/
	virtual ~Triangulo(); /**< Destrutor da Classe*/
	
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
	* @param[in] lado1 para efetuar o calculo
	* @param[in] lado2 para efetuar o calculo
	* @param[in] lado3 para efetuar o calculo
	*/
	void calcularPerimetro(float &lado1, float &lado2, float &lado3);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Triangulo const t);

};

#endif
