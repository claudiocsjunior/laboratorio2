/**
* @file   Paralelepipedo.h
* @brief  Classe responsável pelo calculo da área e volume do paralelepipedo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_PARALELEPIPEDO_H_ /**< Verifica se a variável INCLUDE_PARALELEPIPEDO_H_ foi definida*/
#define INCLUDE_PARALELEPIPEDO_H_ /**< Define a variável INCLUDE_PARALELEPIPEDO_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
using namespace std;

class Paralelepipedo {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float volume; /**< Variável para guardar o valor do volume*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Paralelepipedo(); /**< Construtor da Classe*/
	virtual ~Paralelepipedo(); /**< Destrutor da Classe*/

	/**
	* @brief Método de acesso para a Área
	* @return atributo área
	*/
	float getArea() const;

	/**
	* @brief Método de acesso para o volume
	* @return atributo volume
	*/
	float getVolume() const;

	/**
	* @brief Efetua o calculo da área
	* @param[in] Aresta1 para efetuar o calculo
	* @param[in] Aresta2 para efetuar o calculo
	* @param[in] Aresta3 para efetuar o calculo
	* @return
	*/
	void calcularArea(float &aresta1, float &aresta2, float &aresta3);

	/**
	* @brief Efetua o calculo do volume
	* @param[in] Aresta1 para efetuar o calculo
	* @param[in] Aresta2 para efetuar o calculo
	* @param[in] Aresta3 para efetuar o calculo
	* @return
	*/
	void calcularVolume(float &aresta1, float &aresta2, float &aresta3);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Paralelepipedo const p);
};

#endif
