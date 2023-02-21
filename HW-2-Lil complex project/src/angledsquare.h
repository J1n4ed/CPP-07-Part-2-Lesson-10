// angledsquare.h

#pragma once

#include "angledtwosidesquare.h"
#include <string>

namespace jinx
{
	/*
	Ромб
	*/
	class AngledSquare : public AngledTwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		AngledSquare() = delete;

		AngledSquare(std::string figureName, int side_a, int angle_A, int angle_B) : AngledTwoSideSquare(figureName, side_a, side_a, angle_A, angle_B)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
}