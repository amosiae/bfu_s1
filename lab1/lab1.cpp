#include <iostream>
#include <math.h>
#define PI acos(-1)

int main()
{
	double r;

	std::cout << "Input raduis: ";
	std::cin >> r;
	std::cout << "Area = " << PI * pow(r, 2);
}