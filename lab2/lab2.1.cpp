#include <iostream>
#include <math.h>

int main()
{

	int a, b, c;
	std::cout << "Input natural numbers";
	std::cin >> a >> b >> c;

	if (a < 0 or b < 0 or c < 0)
		std::cout << "Input error, natural numbers can't be negative";
		


	if (a < b && b < c) {
		std::cout << (c - b - a);
	}
	else if ((a % c) == 0) {
		std::cout << (a / c) + b;
	}
	else {
		std::cout << a + b + c;

	}

}