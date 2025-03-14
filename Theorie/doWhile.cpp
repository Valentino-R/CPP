#include <iostream>

int main()
{
	int nombre;

    do
    {
        std::cout << "Entrez un nombre negatif : ";
        std::cin >> nombre;
    } while (nombre < 0);

    std::cout << "Votre nombre est " << nombre;
    


	return 0;
}