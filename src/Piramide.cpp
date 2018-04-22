/**
* @file   Pirâmide.cpp
* @brief  Responsável pelo calculo da área e volume da Pirâmide
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/
#include "../include/Piramide.h" /**< Inclusão da Classe Pirâmide*/

/**
* @brief Construtor do objeto
*/
Piramide::Piramide() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Piramide::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o volume
* @return atributo volume
*/
float Piramide::getVolume() const {
	return volume;
}

/**
* @brief Destrutor do objeto
*/
Piramide::~Piramide() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Efetua o calculo da área
* @param[in] área da base para efetuar o calculo
* @param[in] área lateral para efetuar o calculo
* @return
*/
void Piramide::calcularArea(float& areaBase, float& areaLateral) {
	area = areaBase + areaLateral;
}

/**
* @brief Efetua o calculo do volume
* @param[in] área da base para efetuar o calculo
* @param[in] altura para efetuar o calculo
* @return
*/
void Piramide::calcularVolume(float& areaBase, float& altura) {
	volume = (float)((areaBase * altura)/3);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Piramide const p){
	o << "Area da pirâmide: " << p.area << endl;
	o << "Volume da pirâmide: " <<  p.volume << endl;
	return o;
}
