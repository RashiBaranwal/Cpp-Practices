#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4, y = 5;
    //cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout << "The Value of x is " << x << " and the value of y is " << y << endl;
    // swap(x,y); //This will not swap a and b
    swapPointer(&x, &y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}