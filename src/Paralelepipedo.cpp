/**
* @file   Paralelepipedo.cpp
* @brief  Responsável pelo calculo da área e volume do paralelepipedo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include "../include/Paralelepipedo.h" /**< Inclusão da Classe circulo*/

/**
* @brief Construtor do objeto
*/
Paralelepipedo::Paralelepipedo() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Destrutor do objeto
*/
Paralelepipedo::~Paralelepipedo() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Paralelepipedo::getArea() const {
	return area;
}

/**
* @brief Método de acesso para a volume
* @return atributo volume
*/
float Paralelepipedo::getVolume() const {
	return volume;
}

/**
* @brief Efetua o calculo da área
* @param[in] aresta1 para efetuar o calculo
* @param[in] aresta2 para efetuar o calculo
* @param[in] aresta3 para efetuar o calculo
*/
void Paralelepipedo::calcularArea(float& aresta1, float& aresta2, float& aresta3) {
	area = (2*(aresta1 * aresta2))+(2*(aresta1 * aresta3))+(2*(aresta2 * aresta3));
}

/**
* @brief Efetua o calculo do volume
* @param[in] aresta1 para efetuar o calculo
* @param[in] aresta2 para efetuar o calculo
* @param[in] aresta3 para efetuar o calculo
*/
void Paralelepipedo::calcularVolume(float& aresta1, float& aresta2, float& aresta3) {
	volume = (aresta1 * aresta2 * aresta3);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Paralelepipedo const p){
	o << "Area do paralelepipedo: " << p.area << endl;
	o << "Volume do paralelepipedo: " <<  p.volume << endl;
	return o;
}
