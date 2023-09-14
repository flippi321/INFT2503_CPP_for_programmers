#include <iostream>

using namespace std;

const double pi = 3.141592;

class Circle {
  public:
    Circle(double radius_);           
    int get_area() const;
    double get_circumference() const;
  private: 
    double radius;                          
};                                        

// ==> Implementasjon av klassen Circle
Circle::Circle(double radius_) : radius(radius_) {}   

int Circle::get_area() const {                     
  return pi * radius * radius;
}

double Circle::get_circumference() const {            
  return 2.0 * pi * radius;                          
}

int main() {
  Circle circle = Circle(5);                          // Initiated object

  int area = circle.get_area();                       // Added "int"
  cout << "Arealet er lik " << area << endl;          // Prints area too

  double circumference = circle.get_circumference();   
  cout << "Omkretsen er lik " << circumference << endl;
}