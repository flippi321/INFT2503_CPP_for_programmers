#include <iostream>
using namespace std;
const double pi = 3.141592;

class Commodity {
  public:
    Commodity(string name_, int id_, double price_);           
    string get_name() const;
    int get_id() const;
    double get_price() const;
    void set_price(double newPrice);
    double get_price_with_sales_tax() const;
  private: 
    string name;
    int id;
    double price;                          
};                               

// ==> Implementasjon av klassen Circle
Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}   

string Commodity::get_name() const {                     
    return name;
}

int Commodity::get_id() const {                     
    return id;

}

double Commodity::get_price() const {
    return price;
}

void Commodity::set_price(double newPrice) {
    price = newPrice;
}

double Commodity::get_price_with_sales_tax() const {
    return price*1.25;
}