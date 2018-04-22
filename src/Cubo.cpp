/**
* @file   Cubo.cpp
* @brief  Responsável pelo calculo da área e volume do Cubo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include "../include/Cubo.h" /**< Inclusão da Classe circulo*/

/**
* @brief Construtor do objeto
*/
Cubo::Cubo() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Destrutor do objeto
*/
Cubo::~Cubo() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Cubo::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o volume
* @return atributo volume
*/
float Cubo::getVolume() const {
	return volume;
}

/**
* @brief Efetua o calculo da área
* @param[in] aresta para efetuar o calculo
* @return
*/
void Cubo::calcularArea(float& aresta) {
	area  = 6*(pow(aresta, 2));
}

/**
* @brief Efetua o calculo do volume
* @param[in] aresta para efetuar o calculo
* @return
*/
void Cubo::calcularVolume(float& aresta) {
	volume = pow(aresta, 3);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Cubo const c){
	o << "Area do cubo: " << c.area << endl;
	o << "Volume do cubo: " <<  c.volume << endl;
	return o;
}
