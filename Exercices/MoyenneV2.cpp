#include <iostream>

int main ()
{
    int note;
    int diviseur;
    double moyenne;
    
    std::cout<< "Indiquer le nombre total de note dont vous souhaiter connaitre la moyenne : ";
    std::cin >> diviseur;
    
    for (int i = 0; i < diviseur; ++i)
    {
        std::cout << "entrez la note numero  numero " << i+1 << " : ";
        std::cin >> note; 
        moyenne = moyenne + note;
    }

    moyenne = moyenne / diviseur;

    std::cout << "La moyenne vaut : " << moyenne << '\n';

    return 0;
}