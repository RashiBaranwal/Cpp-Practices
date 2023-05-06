#include <iostream>

using namespace std;

int main()
{
    //**************Typecasting**********
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << a << "\n";

    cout << "The value of a is " << (float)a << "\n";
    cout << "The value of a is " << float(a) << "\n";

    cout << "The value of b is " << (int)b << "\n";
    cout << "The value of b is " << int(b) << "\n";
    cout << "The value of b is " << b << "\n";

    int c = int(b);

    cout << "The expression is " << a + b << "\n";
    cout << "The expression is " << a + int(b) << "\n";
    cout << "The expression is " << a + (int)b << "\n";

    return 0;
}