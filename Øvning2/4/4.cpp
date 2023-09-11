/*
Old code
int a = 5;
int &b;
int *c;
c = &b;
*a = *b + *c;
&b = 2;
*/

int main(int argc, char *argv[])
{
    // Fixed
    int a = 5;
    int b = a;   // Originally &b
    int *c = &b; // While declaring a empty pointer is fine, we need to specify what it points at if we want it to work
    a = b + *c;  // a is not a pointer, so can't be refrenced with *. Neither is b in this case
    b = 2;       // We can't manually give b a position, we can however change it's value

    return 0;
}
