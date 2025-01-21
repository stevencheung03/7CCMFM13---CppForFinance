#include <iostream>
#include "problems.h"
#include <cmath>

int two_problem_1()
{
	bool a = true;
	char b = 'b';
	int c = 13;
	double d = 3.2f;
	unsigned int e = 15;

	std::cout << a << std::endl << b << std::endl << c << std::endl << d << std::endl << e << std::endl;

	return 0;
}

int two_problem_2()
{
	std::cout << "The code for 'a' is " << static_cast<int>('a') << std::endl;
	std::cout << "The code for 'z' is " << static_cast<int>('z') << std::endl;
	std::cout << "The code for 'A' is " << static_cast<int>('A') << std::endl;
	std::cout << "The code for 'Z' is " << static_cast<int>('Z') << std::endl;
	std::cout << "The code for '0' is " << static_cast<int>('0') << std::endl;
	std::cout << "The code for '9' is " << static_cast<int>('9') << std::endl;

	return 0;
}

int two_problem_3()
{
	return 0;
}

int two_problem_4()
{
	double a;
	std::cout << "Type in a decimal number: ";
	std::cin >> a;

	std::cout << "The closest integer is: " << round(a) << std::endl;
	return 0;
}

int two_problem_5()
{
	int player1;
	int player2;
	int diff;

	std::cout << "Type 0 for stone, ";
	std::cout << "1 for scissors, 2 for paper \n";

	std::cout << "Enter player 1's move \n";
	std::cin >> player1;

	std::cout << "Enter player 2's move \n";
	std::cin >> player2;

	diff = player1 - player2;

	if (player1 = player2)
	{
		std::cout << "Its a draw \n";
	}
	else
	{
		if (diff == -2 || diff == 1)
		{
			std::cout << "Player 2 won \n";
		}
		else {
			std::cout << "Player 1  won \n";
		}
	}

	return 0;
}

