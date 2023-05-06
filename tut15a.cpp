#include <iostream>

using namespace std;

int add(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int num1, num2;
    cout << "Enter the first value" << endl;
    cin >> num1;
    cout << "Enter the second value" << endl;
    cin >> num2;
    cout << "The addition of the two numbers is " << add(num1, num2);
    return 0;
}