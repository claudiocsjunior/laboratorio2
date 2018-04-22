/**
* @file   Esfera.cpp
* @brief  Responsável pelo calculo da área e volume da esfera
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include "../include/Esfera.h" /**< Inclusão da Classe esfera*/

/**
* @brief Construtor do objeto
*/
Esfera::Esfera() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Destrutor do objeto
*/
Esfera::~Esfera() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Esfera::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o volume
* @return atributo volume
*/
float Esfera::getVolume() const {
	return volume;
}

/**
* @brief Efetua o calculo da área
* @param[in] raio para efetuar o calculo
* @return
*/
void Esfera::calcularArea(float& raio) {
	area = (4*(PI*(pow(raio, 2))));
}

/**
* @brief Efetua o calculo do volume
* @param[in] raio para efetuar o calculo
* @return
*/
void Esfera::calcularVolume(float& raio) {
	float num = (float)4/3;
	volume = (num *(PI*(pow(raio, 3))));
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Esfera const e){
	o << "Area da esfera: " << e.area << endl;
	o << "Volume da esfera: " <<  e.volume << endl;
	return o;
}
