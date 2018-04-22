/**
* @file   Retângulo.cpp
* @brief  Responsável pelo calculo da área e volume do retângulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/

#include "../include/Retangulo.h" /**< Inclusão da Classe circulo*/

/**
* @brief Construtor do objeto
*/
Retangulo::Retangulo() {
	// TODO Auto-generated constructor stub

}

/**
* @brief Destrutor do objeto
*/
Retangulo::~Retangulo() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Retangulo::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o perímetro
* @return atributo perímetro
*/
float Retangulo::getPerimetro() const {
	return perimetro;
}

/**
* @brief Efetua o calculo da área
* @param[in] base para efetuar o calculo
* @param[in] altura para efetuar o calculo
*/
void Retangulo::calcularArea(float& base, float& altura) {
	area = (base * altura);
}

/**
* @brief Efetua o calculo do perímetro
* @param[in] base para efetuar o calculo
* @param[in] altura para efetuar o calculo
*/
void Retangulo::calcularPerimetro(float& base, float& altura) {
	perimetro = 2*(base + altura);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Retangulo const r){
	o << "Área do retângulo: " << r.area << endl;
	o << "Perimetro do retângulo: " <<  r.perimetro << endl;
	return o;
}
