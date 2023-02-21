// equalsidedtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	Равнобедренный треугольник
	*/
	class EqualSidedTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		EqualSidedTriangle() = delete;

		EqualSidedTriangle(std::string figureName, int side_a, int side_c, int angle_A, int angle_C) : Triangle(figureName, side_a, side_a, side_c, angle_A, angle_A, angle_C)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualSidedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx