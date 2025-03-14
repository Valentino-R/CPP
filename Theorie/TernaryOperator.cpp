#include <iostream>

int main()
{
	//ternary opperator permet de remplacer un if / else 
	//condition ? expression si vrai : expression si faux;  
	//int note {50};
	//note >= 66 ? std::cout << "You pass!" : std::cout << "You fail!";  
	
	//exemple pratique 
	std::cout << "Enter a number : ";
	int number;
	std::cin >> number;

	std::cout << '\n';
	number % 2 == 0 ? std::cout << "Your number is even" : std::cout << "Your number is odd"; 

	//exemple avec une valeur booleen
	bool hungry = true;

	std::cout << '\n';
	hungry ? std::cout << "You are hungry" : std::cout << "You are full"; 

	return 0;
}