#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *b = &a; // 'b' is a pointer which is storing the adress of 'a'
    //& --> (Address of) operator
    cout << "The adress of a is " << &a << "\n";
    cout << "The address of a is " << b << "\n";
    cout <<"b is "<< b << endl;

    //-->(value at ) Dereference operator
    cout << "The value at the address b is " << *b << "\n";

    // Pointer to pointer
    int **c = &b;
    // Ek aisa pointer jo pointer ke address ko store karta hai
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address of c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
    cout << "c is "<<c << endl;

    return 0;
}
