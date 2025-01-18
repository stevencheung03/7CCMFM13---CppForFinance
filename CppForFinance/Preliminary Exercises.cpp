#include <iostream>
#include <cmath>

using namespace std;

int Problem_1()
{
	std::cout << "You are a student." << endl;
	std::cout << "You are learning C++" << endl;
	return 0;
}

int Problem_2()
{
	int a = 10;
	int b = 15;
	float c = 12.6f;

	std::cout << a << endl;
	std::cout << b << endl;
	std::cout << c << endl;

	return 0;
}

int Problem_3()
{
	int num1, num2, num3;

	std::cout << "Enter three integer values: ";
	std::cin >> num1 >> num2 >> num3;

	cout << "Your numbers forward: " << num1 << ", " << num2 << ", " << num3 << endl;

	// Print the values in reversed order
	cout << "Your numbers reversed: " << num3 << ", " << num2 << ", " << num1 << endl;

	return 0;
}

int Problem_4()
{
	int a = 10;
	int b = 15;
	int c = a * b;

	std::cout << a << endl;
	std::cout << b << endl;
	std::cout << c << endl;

	return 0;
}

int Problem_5()
{
	double a;
	std::cout << "Type in a number: ";
	std::cin >> a;

	double b;
	std::cout << "Type in another number: ";
	std::cin >> b;

	std::cout << "The maximum between " << a << " and " << b << " is " << max(a, b) << endl;

	return 0;
}

int Problem_6()
{
	double a;
	cout << "Type in a number: ";
	cin >> a;

	cout << abs(a) << endl;

	return 0;
}

int main()
{
	Problem_3();
}