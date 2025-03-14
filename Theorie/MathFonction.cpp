#include <iostream>
#include <cmath>

int main()
{
	double x = {3}; 
	double y = {4};
	double z;

	//copare 2 valeur et trouve la plus haute 
	z = std::max(x, y);
	std::cout << "The highest value is : " << z << '\n'; 

	//copare 2 valeur et trouve la plus haute 
	z = std::min(x, y);
	std::cout << "The lowest value is : " << z << '\n';

	//fonction de puissance pow(nbr, exposant)
	z= pow(x, 2);
	std::cout << "The square of " << x << " is : " << z << '\n';

	//fonction de racine pow(nbr, exposant)
	z= sqrt(144);
	std::cout << "The square root of  144 is : " << z << '\n';

	return 0;
}