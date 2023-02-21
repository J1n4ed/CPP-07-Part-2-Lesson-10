// angledtwosidesquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	Параллепипед
	*/
	class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		AngledTwoSideSquare() = delete;

		AngledTwoSideSquare(std::string figureName, int side_a, int side_b, int angle_A, int angle_B) : Quadrangle(figureName, side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx