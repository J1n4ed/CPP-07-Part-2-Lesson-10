// quadtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	Прямоугольный треугольник
	*/
	class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		QuadTriangle() = delete;

		QuadTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_c, angle_A, angle_B, 90)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx