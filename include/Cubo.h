/**
* @file   Cubo.h
* @brief  Classe responsável pelo calculo da área e volume do cubo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_CUBO_H_ /**< Verifica se a variável INCLUDE_CUBO_H_ foi definida*/
#define INCLUDE_CUBO_H_ /**< Define a variável INCLUDE_CUBO_H_*/

#include <iostream> /**< Inclusão da biblioteca iostream*/
using namespace std; /**< Usando namespace para std*/
#include <cmath> /**< Inclusão da biblioteca cmath*/

class Cubo {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float volume; /**< Variável para guardar o valor do volume*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Cubo(); /**< Construtor da Classe*/
	virtual ~Cubo(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para a Área
	* @return atributo área
	*/
	float getArea() const; /**< Método de acesso para o atributo área*/

	/**
	* @brief Método de acesso para o volume
	* @return atributo volume
	*/
	float getVolume() const; /**< Método de acesso para o atributo volume*/

	/**
	* @brief Efetua o calculo da área
	* @param[in] Aresta para efetuar o calculo
	* @return valor da área
	*/
	void calcularArea(float &aresta);

	/**
	* @brief Efetua o calculo do volume
	* @param[in] Aresta para efetuar o calculo
	* @return valor do volume
	*/
	void calcularVolume(float &aresta); /**< Método que efetua o cálculo do perímetro*/

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Cubo const c); /**< Sobrecarga do método 'cout'*/
};

#endif
