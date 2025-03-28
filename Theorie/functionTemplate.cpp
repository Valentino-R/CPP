#include <iostream>

template <typename T, typename U>

auto max(T x, U y){
	return (x + y) * 2; 
}

int main()
{
	
	std::cout << max(1 , 1.8) << '\n';

	return 0;
}