#include <iostream>

int add(int x, int y) // integer version
{
    return x + y;
}

double add(double x, double y) // floating point version
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2); // calls add(int, int)
    std::cout << '\n';
    std::cout << add(1.2, 3.4); // calls add(double, double)
	
	return 0;
}

/*	int add(int x, int y); // integer version
	double add(double x, double y); // floating point version
	double add(int x, double y); // mixed version
	double add(double x, int y); // mixed version

	typedef int Height; // typedef
	using Age = int; // type alias

	void print(int value);
	void print(Age value); // not differentiated from print(int)
	void print(Height value); // not differentiated from print(int)	
	
	The return type of a function is not considered for differentiation
	int getRandomValue();
	double getRandomValue();	*/