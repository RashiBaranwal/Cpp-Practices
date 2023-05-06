#include <iostream>

using namespace std;

int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age " << endl;
    cin >> age;

    // Selection control structure switch case statements
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}