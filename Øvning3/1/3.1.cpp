const double pi = 3.141592;

class Circle {
  public:
    Circle(double radius_);                 // Didn't use a capital letter
    int get_area() const;
    double get_circumference() const;
  private: 
    double radius;                          // Didn't have ":" after private
}

// ==> Implementasjon av klassen Circle
public Circle::Circle(double radius_) : radius_(radius) {}

int Circle::get_area() {
  return pi * radius * radius;
}

Circle::get_circumference() const {
  circumference = 2.0 * pi * radius;
  return circumference;
}