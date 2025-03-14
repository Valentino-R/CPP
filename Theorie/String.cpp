#include <iostream>
#include <string>

int main()
{
		
	std::cout << "Choisissez un Pseudo";
	std::string pseudo;
	std::getline(std::cin, pseudo);

	// .length compte le nombre de charactère d'un string
	if(pseudo.length() > 12 || pseudo.length() < 3)
	{
		std::cout << "Votre pseudo ne peux pas faire moins de 3 ou plus de 12 charactères";
	}
	// .empty retourne true si le string length est 0 (regarde si le string ne contien aucun charactère) 
	else if (pseudo.empty())
	{
		std::cout << "veuillez choisir un pseudo";
	}
	else
	{
		std::cout << "Bienvenu";
	}
	
	// .clear()
	// .append()
	// .at(position)
	// .insert(position, char)
	// .find()
	// .erase(début, fin)


	return 0;
}