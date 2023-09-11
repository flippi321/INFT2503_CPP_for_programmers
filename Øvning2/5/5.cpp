#include <iostream>

int main(int argc, char *argv[])
{
    double number = 6.9;    // Nice

    // Pointers and references
    double *p1 = &number;   // Pointer pointing at number
    double &p2 = number;    // Reference pointing at number
    
    /* Three ways to get number's value */
    std::cout << "1: " << number << std::endl;
    std::cout << "2: " << *p1 << std::endl;
    std::cout << "3: " << *&p2 << std::endl;
    return 0;
}
