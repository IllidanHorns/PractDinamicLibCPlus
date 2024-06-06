#include <iostream>
#include "Windows.h"
int main()
{
	HINSTANCE load;
	
	load = LoadLibrary(L"DynamicLib1.dll");

	/*typedef bool (*SearchText) (std::string, std::string);
	SearchText _Summ;
	_Summ = (SearchText)GetProcAddress(load, "SearchText");
	bool result = _Summ("Привет, привет, пока, пока, привет", "привет");
	if (result == true) 
	{
		std::cout << "Строка найдена!" << std::endl;
	}
	else {
		std::cout << "Строка не найдена!" << std::endl;
	}*/

	typedef bool (*Sum) (int, int);
	Sum _Sum;
	_Sum = (Sum)GetProcAddress(load, "Sum");
	int test; 
	test = _Sum(1, 8);
	std::cout << test << std::endl;

	FreeLibrary(load);
}
