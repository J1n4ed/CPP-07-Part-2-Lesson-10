// twosidedsquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	Прямоугольник
	*/
	class TwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		TwoSideSquare() = delete;

		TwoSideSquare(std::string figureName, int side_a, int side_b) : Quadrangle(figureName, side_a, side_b, side_a, side_b, 90, 90, 90, 90)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class TwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx