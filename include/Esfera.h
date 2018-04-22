/**
* @file   Esfera.h
* @brief  Classe responsável pelo calculo da área e volume da esfera
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_ESFERA_H_ /**< Verifica se a variável INCLUDE_CUBO_H_ foi definida*/
#define INCLUDE_ESFERA_H_ /**< Define a variável INCLUDE_CUBO_H_*/

#include <iostream> /**< Inclusão da biblioteca iostream*/
#include <cmath> /**< Inclusão da biblioteca cmath*/
using namespace std; /**< Usando namespace para std*/

#define PI 3.1415 /**< Definição do valor de pi*/

class Esfera {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float volume; /**< Variável para guardar o valor do volume*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Esfera(); /**< Construtor da Classe*/
	virtual ~Esfera(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para a Área
	* @return atributo área
	*/
	float getArea() const;

	/**
	* @brief Método de acesso para o volume
	* @return atributo volume
	*/
	float getVolume() const; /**< Método de acesso para o atributo volume*/

	/**
	* @brief Efetua o calculo da área
	* @param[in] Raio para efetuar o calculo
	* @return 
	*/
	void calcularArea(float &raio);

	/**
	* @brief Efetua o calculo do volume
	* @param[in] Raio para efetuar o calculo
	* @return 
	*/
	void calcularVolume(float &raio);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Esfera const e);
};

#endif
