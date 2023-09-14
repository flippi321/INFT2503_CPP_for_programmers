#include <iostream>

int find_sum(const int *table, int start, int end);

int main(int argc, char *argv[])
{
    const int length = 20;
    int temperatures[length];

    // Fill temperatures with values from 1 to 20
    for(int i = 0; i < length; i++){
        temperatures[i] = (i+1);
    }

    std::cout << "Sum of first 10 numbers:" << std::endl;
    std::cout << find_sum(temperatures, 0, 10) << std::endl << std::endl;

    std::cout << "Sum of next 5 numbers:" << std::endl;
    std::cout << find_sum(temperatures, 10, 15) << std::endl << std::endl;

    std::cout << "Sum of last 5 numbers:" << std::endl;
    std::cout << find_sum(temperatures, 15, 20) << std::endl << std::endl;

    return 0;
}

int find_sum(const int *table, int start, int end){
    int sum = 0;

    for (int i = start; i < end; i++){
        sum += table[i];
    }

    return sum;
}
