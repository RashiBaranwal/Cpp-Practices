#include <iostream>

using namespace std;

int product(int a, int b)
{
    // Not recommended to use below lines with inline
    //  static int c = 0; //This executes only once
    //  c = c+1; //Next time this function is run,the value of c will be restored
    return a * b;
}

float moneyReceieved(int currentMoney, float factor = 1.04)//Here this factor=1.04 is default value
//Remember!! Default Argument value i.e"float factor = 1.04" we have to write in right side after compulsary Argument
{
    return currentMoney * factor;
}
int main()
{
    int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account,you will receive " << moneyReceieved(money) << "Rs after 1 year"<<endl;
    cout << "For VIP:If you have " << money << " Rs in your bank account,you will receive " << moneyReceieved(money,1.1) << "Rs after 1 year";//The value which we get by default if we have not given any value
     //A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn't provide a value for the argument. In case any value is passed, the default value is overridden.

    return 0;
}