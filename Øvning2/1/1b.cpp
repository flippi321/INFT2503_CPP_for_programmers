#include <iostream>

int main(int argc, char *argv[])
{
    // Values from task 1a
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    // New code
    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    std::cout << *p << " " << *q << std::endl;  // Outputs: 8 8

    return 0;
}
