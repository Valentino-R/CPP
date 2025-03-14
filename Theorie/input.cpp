#include <iostream>
#include <string>

int main()
{
	//pose une question dont vous pouver entrez la réponce dans la cosole 
	std::cout << "Hello, what's your name ? : ";
	
	//initialise la variable name 
	std::string name;
	
	//extrai la valeur/string de la console et L'assigne a la variable name
	std::cin >> name;

	std::cout << "What's you age ? : ";
	int age;
	std::cin >> age; 

	//affiche le nouvel valeur de la variable dans la console
	std::cout << "Hello " << name << " , you are " << age << " years old" << '\n';

	return 0;
}