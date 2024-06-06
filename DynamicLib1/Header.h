#include <iostream>

#pragma once
extern "C" __declspec(dllexport) int SearchText(std::string a, std::string b);

#pragma once
extern "C" __declspec(dllexport) int Sum(int a, int b);