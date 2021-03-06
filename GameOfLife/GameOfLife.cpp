 // GameOfLife.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <vector>
#include "Boarld.h"
#include <windows.h>
#include <stdlib.h>

int main()
{
	Boarld boarld = Boarld(10, 10);
	std::string line;
	std::vector<std::vector<bool>> start = std::vector<std::vector<bool>>(10);
	for (int n = 0; n < 10; n++)
	{
		start.at(n) = std::vector<bool>(10);
		std::getline(std::cin, line);
		for (int m = 0; m < 10; m++)
			start.at(n).at(m) = line.at(m) == '*' ? true: false;
	}
	boarld.set(start);
	while (true)
	{
		boarld.print();
		boarld.step();
		std::getline(std::cin, line);
		if (line == "**") break;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
