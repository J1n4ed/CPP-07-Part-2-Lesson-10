/*
Реализаци¤ функций
*/

#include "triangle.h"
#include <iostream>

/*

Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "Стороны: а = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "Углы: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}