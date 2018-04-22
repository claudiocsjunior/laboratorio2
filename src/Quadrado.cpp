/**
* @file   Quadrado.cpp
* @brief  Responsável pelo calculo da área e perìmetro do quadrado
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/
#include "../include/Quadrado.h" /**< Inclusão da Classe quadrado*/

/**
* @brief Construtor do objeto
*/
Quadrado::Quadrado() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Destrutor do objeto
*/
Quadrado::~Quadrado() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Quadrado::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o perímetro
* @return atributo perímetro
*/
float Quadrado::getPerimetro() const {
	return perimetro;
}

/**
* @brief Efetua o calculo da área
* @param[in] lado para efetuar o calculo
*/
void Quadrado::calcularArea(float& lado) {
	area = pow(lado, 2);
}

/**
* @brief Efetua o calculo do perímetro
* @param[in] lado para efetuar o calculo
*/
void Quadrado::calcularPerimetro(float& lado) {
	perimetro = (4*lado);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Quadrado const q){
	o << "Area do quadrado: " << q.area << endl;
	o << "Perimetro do quadrado: " <<  q.perimetro << endl;
	return o;
}
