#include <iostream>

int main(int argc, char *argv[])
{
    char text[5];
    char *pointer = text;
    char search_for = 'e';

    // Issue 1: Buffer Overflow - Input can exceed the buffer size allocated for 'text'.
    cin >> text;

    // Issue 2: Infinite Loop - In the absence of 'e' in the input, the loop will never terminate.
    while (*pointer != search_for)
    {
        // Issue 3: Data Overwriting - Existing characters are overwritten until 'e' is encountered.
        *pointer = search_for;
        pointer++;

        
        // Issue 4: Lack of Boundary Check - 'pointer' could exceed the bounds of the 'text' buffer.
    }

    return 0;
}
