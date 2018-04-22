/**
* @file   Piramide.h
* @brief  Classe responsável pelo calculo da área e volume da pirâmide
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#ifndef INCLUDE_PIRAMIDE_H_ /**< Verifica se a variável INCLUDE_PIRAMIDE_H_ foi definida*/
#define INCLUDE_PIRAMIDE_H_ /**< Define a variável INCLUDE_PIRAMIDE_H_ */

#include <iostream> /**< Inclusão da biblioteca iostream*/
using namespace std;

class Piramide {
private: /**< Local para declaração de métodos e atributos privados*/
	float area; /**< Variável para guardar o valor da área*/
	float volume; /**< Variável para guardar o valor do volume*/
public: /**< Local para declaração de métodos e atributos públicos*/
	Piramide(); /**< Construtor da Classe*/
	virtual ~Piramide();/**< Destrutor da Classe*/

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
	* @param[in] Area da Base para efetuar o calculo
	* @param[in] Área Lateral para efetuar o calculo
	*/
	void calcularArea(float &areaBase, float &areaLateral);

	/**
	* @brief Efetua o calculo da área
	* @param[in] Area da Base para efetuar o calculo
	* @param[in] altura para efetuar o calculo
	*/
	void calcularVolume(float &areaBase, float &altura);

	/**
	* @brief Efetua a sobrecarga do operador <<
	* @param[in] variável para o <<
	* @param[in] Constante para guardar o objeto
	* @return valor do cout
	*/
	friend ostream& operator<<(ostream &o, Piramide const p);
};

#endif
