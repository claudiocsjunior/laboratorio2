/**
* @file   Triângulo.cpp
* @brief  Responsável pelo calculo da área e perímetro do Triângulo
* @author Claudio da Cruz Silva Junior
* @since  21/04/2018
* @date   21/04/2018
*/
#include "../include/Triangulo.h" /**< Inclusão da Classe circulo*/

/**
* @brief Construtor do objeto
*/
Triangulo::Triangulo() {
	// TODO Auto-generated constructor stub
	area = 0;
	perimetro = 0;
}

/**
* @brief Destrutor do objeto
*/
Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

/**
* @brief Método de acesso para a Área
* @return atributo área
*/
float Triangulo::getArea() const {
	return area;
}

/**
* @brief Método de acesso para o perímetro
* @return atributo perímetro
*/
float Triangulo::getPerimetro() const {
	return perimetro;
}

/**
* @brief Efetua o calculo da área
* @param[in] base para efetuar o calculo
* @param[in] altura para efetuar o calculo
* @return
*/
void Triangulo::calcularArea(float &base, float &altura){
	area = ((base * altura)/2);
}

/**
* @brief Efetua o calculo da área
* @param[in] lado1 para efetuar o calculo
* @param[in] lado2 para efetuar o calculo
* @param[in] lado3 para efetuar o calculo
* @return
*/
void Triangulo::calcularPerimetro(float &lado1, float &lado2, float &lado3){
	perimetro = (lado1 + lado2 + lado3);
}

/**
* @brief Efetua a sobrecarga do operador <<
* @param[in] variável para o <<
* @param[in] Constante para guardar o objeto
* @return valor do cout
*/
ostream& operator<<(ostream &o, Triangulo const t){
	o << "Area do triangulo: " << t.area << endl;
	o << "Perimetro do triangulo: " <<  t.perimetro << endl;
	return o;
}
