/**
* @file   Circulo.cpp
* @brief  Responsável pelo calculo da área e perimétro do Circulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/
#include "../include/Circulo.h" /**< Inclusão da Classe circulo*/

/**
* @brief Construtor do objeto
*/
Circulo::Circulo() {
	// TODO Auto-generated constructor stub

}


/**
* @brief Destrutor do objeto
*/
Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Circulo::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o perimetro
* @return atributo perímetro
*/
float Circulo::getPerimetro() const {
	return perimetro;
}

/**
* @brief Efetua o calculo da área
* @param[in] raio para efetuar o calculo
* @return
*/
void Circulo::calcularArea(float raio) {
	area = (PI*(pow(raio, 2)));

}

/**
* @brief Efetua o calculo do perímetro
* @param[in] raio para efetuar o calculo
* @return
*/
void Circulo::calcularPerimetro(float raio) {
	perimetro = (2*(PI * raio));
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Circulo const c){
	o << "Area do circulo: " << c.area << endl;
	o << "Perimetro do circulo: " <<  c.perimetro << endl;
	return o;
}
