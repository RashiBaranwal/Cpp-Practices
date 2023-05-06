#include <iostream>

using namespace std;

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

//Call by reference using c++ reference variable
int & swapRefereceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout << "The Value of x is " << x << " and the value of y is " << y << endl;
    // swap(x,y); //This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
     swapRefereceVar(x, y) = 766; //This will swap a and b using  reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}