#include <iostream>
#include "problems.h"
#include <cmath>

int one_problem_1()
{
	std::cout << "You are a student." << std::endl;
	std::cout << "You are learning C++" << std::endl;
	return 0;
}

int one_problem_2()
{
	int a = 10;
	int b = 15;
	float c = 12.6f;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}

int one_problem_3()
{
	int num1, num2, num3;

	std::cout << "Enter three integer values: ";
	std::cin >> num1 >> num2 >> num3;

	std::cout << "Your numbers forward: " << num1 << ", " << num2 << ", " << num3 << std::endl;

	// Print the values in reversed order
	std::cout << "Your numbers reversed: " << num3 << ", " << num2 << ", " << num1 << std::endl;

	return 0;
}

int one_problem_4()
{
	int a = 10;
	int b = 15;
	int c = a * b;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}

int one_problem_5()
{
	double a;
	std::cout << "Type in a number: ";
	std::cin >> a;

	double b;
	std::cout << "Type in another number: ";
	std::cin >> b;

	std::cout << "The maximum between " << a << " and " << b << " is " << std::max(a, b) << std::endl;

	return 0;
}

int one_problem_6()
{
	double a;
	std::cout << "Type in a number: ";
	std::cin >> a;

	std::cout << std::abs(a) << std::endl;

	return 0;
}
