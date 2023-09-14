#include <iostream>

/**
 * This code will cause an error
 * 
 * This is because the line points to the position 0 (Nothing)
 * 
 * the strcpy will then try to copy the text to the location. 
 * But as this location is 0 (or nothing), it is unable to do this which causes an error
*/
int main(int argc, char *argv[])
{
    char *line = nullptr;   // eller char *line = 0;
    strcpy(line, "Dette er en tekst");

    return 0;
}
