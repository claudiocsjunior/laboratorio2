/**
* @file   Circulo.h
* @brief  Classe responsável pelo calculo da área e perímetro do circulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_CIRCULO_H_ /**< Verifica se a variável INCLUDE_CIRCULO_H_ foi definida*/
#define INCLUDE_CIRCULO_H_ /**< Define a variável INCLUDE_CIRCULO_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
#include <cmath> /**< Inclusão da biblioteca cmath*/
using namespace std; /**< Usando namespace para std*/

#define PI 3.1415 /**< Definição do valor de pi*/

class Circulo {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float perimetro; /**< Variável para guardar o valor do perímetro*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Circulo(); /**< Construtor da Classe*/
	virtual ~Circulo(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para a Área
	* @return atributo área
	*/
	float getArea() const;

	/**
	* @brief Método de acesso para o volume
	* @return atributo volume
	*/
	float getPerimetro() const;

	/**
	* @brief Efetua o calculo da área
	* @param[in] Raio para efetuar o calculo
	* @return 
	*/
	void calcularArea(float raio);

	/**
	* @brief Efetua o calculo do Perímetro
	* @param[in] Raio para efetuar o calculo
	* @return
	*/
	void calcularPerimetro(float raio);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Circulo const c);
};

#endif
