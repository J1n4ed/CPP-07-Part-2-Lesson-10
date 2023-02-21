// main.cpp

/*
  06.02.2023
  ���� 2, ������� 6
  ������ 3, �������� �������
  CPP-07
  @j1n4ed
*/

#include "src/equalizedtriangle.h"
#include "src/angledsquare.h"
#include "src/square.h"
#include "src/quadtriangle.h"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#include <string>
#endif // windows

#ifdef linux
#include <stdlib.h>
#include <string.h>
#endif // linux

void print_info(jinx::Figure*);

int main(int argc, char** argv)
{

#ifdef _WIN32

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#endif // _WIN32

#ifdef linux

	setlocale(LC_ALL, "Russian");

#endif // linux

	// pointers

	jinx::Triangle* ptr_Triangle;
	jinx::Quadrangle* ptr_Quadrangle;
	jinx::Figure* ptr_Figure;

	// --------------------------------------------------------------
	// make objects

	jinx::Triangle figTriangle("�����������", 10, 20, 30, 50, 60, 70);

	jinx::QuadTriangle figQuadTriangle("������������� �����������", 10, 20, 30, 50, 60);
	jinx::EqualSidedTriangle figEqualSideTriangle("�������������� �����������", 10, 20, 50, 70);
	jinx::EqualizedTriangle figEqualizedTriangle("�������������� �����������", 30, 60);

	jinx::Quadrangle figQuadrangle("��������������", 10, 20, 30, 40, 50, 60, 70, 80);

	jinx::TwoSideSquare figTwoSideSquare("�������������", 10, 20);
	jinx::Square figSquare("�������", 20);
	jinx::AngledTwoSideSquare figAngleTwoSideSq("������������", 20, 30, 30, 40);
	jinx::AngledSquare figAngledSq("����", 30, 30, 40);

	// ---------------------------------------------------------------
	// Print results

	// �����������
	ptr_Figure = &figTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ������������� �����������
	ptr_Figure = &figQuadTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������� �����������
	ptr_Figure = &figEqualSideTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������� �����������
	ptr_Figure = &figEqualizedTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ��������������
	ptr_Figure = &figQuadrangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������
	ptr_Figure = &figTwoSideSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������
	ptr_Figure = &figSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ������������
	ptr_Figure = &figAngleTwoSideSq;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ����
	ptr_Figure = &figAngledSq;
	print_info(ptr_Figure);
	std::cout << '\n';

	// clear and exit

	// ------------------
	std::cout << "������� ����� ������ ��� ����������...\n";
	std::getchar();
	return EXIT_SUCCESS;
}

void print_info(jinx::Figure* Figure)
{
	Figure->print_figure();
}