#include <iostream>
#include "problems.h"
#include <cmath>

int three_problem_1a(unsigned int n)
{
	unsigned long int ans = 1;

	for (int i = 1; i < n+1; i++)
	{
		ans = i * ans;
	}

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_1b(unsigned int n)
{
	unsigned long int ans = 1;
	int i = 1;

	while (i < n + 1)
	{
		ans = i * ans;
		i++;
	}

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_1c(unsigned int n)
{
	unsigned long int ans = 1;
	int i = 1;

	do
	{
		ans = i * ans;
		i++;
	} while (i < n + 1);

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_2a(unsigned int x, unsigned int n)
{
	unsigned long int ans = 1;

	for (int i = 1; i < n + 1; i++)
	{
		ans = x * ans;
	}

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_2b(unsigned int x, unsigned int n)
{
	unsigned long int ans = pow(x,n);

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_3(unsigned int n)
{
	unsigned long int ans = 0;

	for (int i = 0; i < n + 1; i++)
	{
		ans = i + ans;
	}

	std::cout << ans << std::endl;

	return 0;
}

int three_problem_4(unsigned int a, unsigned int b)
{
	for (int i = a; i < b+1; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}

int three_problem_5(unsigned int n)
{
	if (n <= 1)
	{
		return n;
	}

	return three_problem_5(n - 1) + three_problem_5(n - 2);
}
