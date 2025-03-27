#include <iostream>
#include <cmath>

int main ()
{
    double EarthGravity {9.80665};
    double velocity {};
    double hight {};
    double time {};

    std::cout << "indicate how hight is your object : ";
    std::cin >> hight;

    time = hight/(0.5*EarthGravity);
    velocity = time * EarthGravity;
    std::cout << "the object will take " << time << "s to hit the ground" << '\n';
    std::cout << "and will travel at " << velocity << "m/s" << " or " << velocity/3.6 << "km/h" <<'\n';
    
    return 0;
}