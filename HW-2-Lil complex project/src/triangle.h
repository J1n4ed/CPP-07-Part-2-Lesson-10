// triangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{

	/*
	Любой треуголник
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //

		void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		Triangle() = delete;

		Triangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure(figureName)
		{
			side_a_ = side_a;
			side_b_ = side_b;
			side_c_ = side_c;

			angle_A_ = angle_A;
			angle_B_ = angle_B;
			angle_C_ = angle_C;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_;
		int angle_A_, angle_B_, angle_C_;

	}; // END OF class Triangle // ---------------------------------------------------------------------------------------------------------------- //

} // END OF jinx