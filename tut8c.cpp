#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // const int a =3;
    // cout<<"The value of a was: "<<a<<"\n";
    // a = 45; //Not valid b/c now value of a is constant
    // cout <<"The value of a is: "<<a<<"\n";
    int a = 3, b = 78, c = 1233;
    cout << "The value of a without setw is: " << a << "\n";
    cout << "The value of b without setw is: " << b << "\n";
    cout << "The value of c without setw is: " << c << "\n";

    cout << "The value of a is: " <<setw(4)<< a << "\n";//Taking width of four number no matter which num it is
    cout << "The value of b is: " <<setw(4)<< b << "\n";
    cout << "The value of c is: " <<setw(4)<< c << "\n";

    return 0;
}