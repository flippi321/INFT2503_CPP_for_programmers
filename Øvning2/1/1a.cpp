#include <iostream>

int main(int argc, char *argv[])
{
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;
    
    /**
     * Here we se that while p and q's adresses are unique
     * Their values is the adress of the corresponding value
     * This is the basis of pointers and is therefore the expected values
    */
    std::cout << " Value |  Adress  | Value" << std::endl;
    std::cout << "   j   | " << &j << " |   " << j << std::endl;
    std::cout << "   i   | " << &i << " |   " << i << std::endl;
    std::cout << "  *p   | " << &p << " | " << p << std::endl;
    std::cout << "  *q   | " << &q << " | " << q << std::endl;
    return 0;
}
