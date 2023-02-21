// quadrangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{
	/*
	Любой четырёхугольник
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		Quadrangle() = delete;

		Quadrangle(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(figureName)
		{
			side_a_ = side_a;
			side_b_ = side_b;
			side_c_ = side_c;
			side_d_ = side_d;

			angle_A_ = angle_A;
			angle_B_ = angle_B;
			angle_C_ = angle_C;
			angle_D_ = angle_D;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_, side_d_;
		int angle_A_, angle_B_, angle_C_, angle_D_;

	}; // END OF class Quadrangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx