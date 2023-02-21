// main.cpp

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#include <string>
#endif // windows

#ifdef linux
#include <stdlib.h>
#include <string.h>
#endif // linux

int main(int argc, char** argv)
{

#ifdef _WIN32

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#endif // _WIN32

#ifdef linux

	setlocale(LC_ALL, "Russian");

#endif // linux

	std::cout << "��� ��� �����?\n";

	std::string userName;

	std::getline(std::cin, userName);

	std::cout << "������, " << userName << "!" << std::endl;

	// ------------------
	std::cout << "������� ����� ������ ��� ����������...\n";
	std::getchar();
	return EXIT_SUCCESS;
} // end of main()