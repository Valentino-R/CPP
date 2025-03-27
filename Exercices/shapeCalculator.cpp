#include <iostream>
#include <cmath>

const double PI = 3.14159; // Define constant value for PI

class Shape{
    public:

    virtual double calculateArea() const = 0;

    virtual double calculatePerimeter() const = 0;

};

class Circle: public Shape {
    private: 
        double radius;
        
    public:

    Circle(double rad): radius(rad){}

    double calculateArea() const override {
        return PI * pow(radius, 2);
    }
    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

class Sphere: public Shape {
    private: 
        double radius;
        
    public:

    Sphere(double rad): radius(rad){}

    double calculateArea() const override {
        return (4/3) * PI * pow(radius, 3);
    }
    double calculatePerimeter() const override {
        return 4 * PI * pow(radius, 2);
    }
};

class Rectangle: public Shape {
    private: 
        double length;
        double width;
        
    public:

    Rectangle(double len, double wid): length(len), width(wid){}

    double calculateArea() const override {
        return length * width;
    }
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle: public Shape {
    private: 
        double side2;
        double side3;
        double base;
        double hight;
        
    public:

    Triangle(double s2, double s3, double b, double h): side2(s2), side3(s3), base(b), hight(h){}

    double calculateArea() const override {
        return (base * hight) / 2;
    }
    double calculatePerimeter() const override {
        return base + side2 + side3;
    }
};

int main ()
{
    Circle circle(10.0);
    Sphere sphere(10.0); 
    Rectangle rectangle(4.2, 8.0); 
    Triangle triangle(4.0, 3.2, 4.0, 2.8); 
  
    
    std::cout << "Circle: " << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl; 

    std::cout << "Sphere: " << std::endl;
    std::cout << "Area: " << sphere.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << sphere.calculatePerimeter() << std::endl;
  
    std::cout << "\nRectangle: " << std::endl;
    std::cout << "Area: " << rectangle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl; 
  
    std::cout << "\nTriangle: " << std::endl;
    std::cout << "Area: " << triangle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl; 


    return 0;
}