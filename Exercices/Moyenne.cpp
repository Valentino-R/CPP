#include <iostream>

int main ()
{
    int nbr;
    double moyenne;
    
    std::cout << "taper la valeur numero 1 : ";
    std::cin >> nbr; 
    moyenne = moyenne + nbr;
    std::cout << "taper la valeur numero 2 : ";
    std::cin >> nbr; 
    moyenne = moyenne + nbr;
    std::cout << "taper la valeur numero 3 : ";
    std::cin >> nbr; 
    moyenne = moyenne + nbr;
    std::cout << "taper la valeur numero 4 : ";
    std::cin >> nbr; 
    moyenne = moyenne + nbr;
    std::cout << "taper la valeur numero 5 : ";
    std::cin >> nbr; 
    moyenne = moyenne + nbr;

    moyenne = moyenne / 5;

    std::cout << "La moyenne vaut : " << moyenne << '\n';

    return 0;
}