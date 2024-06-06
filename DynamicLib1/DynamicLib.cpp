#include <iostream>

extern "C" __declspec(dllexport) int Sum(int a, int b)
{
	return a + b;
}

extern "C" __declspec(dllexport) bool SearchText(std::string text_user, std::string search_text) {
    std::string::size_type position = text_user.find(search_text);
    if (position == std::string::npos) {
        return false;
    }
    else {
        return true;
    }
}

