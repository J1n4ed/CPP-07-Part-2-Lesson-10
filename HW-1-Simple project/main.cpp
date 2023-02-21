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

	std::cout << "Как вас зовут?\n";

	std::string userName;

	std::getline(std::cin, userName);

	std::cout << "Привет, " << userName << "!" << std::endl;

	// ------------------
	std::cout << "Нажмите любую кнопку для завершения...\n";
	std::getchar();
	return EXIT_SUCCESS;
} // end of main()