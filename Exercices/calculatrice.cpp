#include <iostream>



int main ()
{
    char repeat {}; 
    
    while (true)
    {
        char operation {};
        double a {}, b {}, res {};

        std::cout << "Enter an operator (+, -, *, /) : ";
        std::cin >> operation;

        std::cout << "Enter your first number : ";
        std::cin >> a;

        std::cout << "Enter your second number : ";
        std::cin >> b;

        switch (operation)
        {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;    
        case '/':
            res = a / b;
            break;
        default:
            std::cout << "Error! operator is not correct";
            break;
        }

        std::cout << "The result for : "<< a << " " << operation << " "<< b << " = " << res << '\n';
        std::cout << '\n';

        std::cout << "do you want to do another calcul (y,n) : " << '\n';
        std::cin >> repeat;
        
        if (repeat == 'y')
        {
            return 1;
        }
        else if (repeat == 'n')
        {
            return 0;
        }
        else
        {
            std::cout << "pls enter y or n in lowercase";
        }
    }

    return 0;
}