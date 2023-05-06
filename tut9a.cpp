#include <iostream>

using namespace std;

int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age " << endl;
    cin >> age;

    // Selection control structure If else-if else ladder
    
    if ((age < 18) && (age>0))
    {
        cout << "You cannot come to the party"
             << "\n";
    }
    else if (age == 18)
    {
        cout << "You are a kid you will get a kid pass to the party"
             << "\n";
    }
    else if (age < 1)
    {
        cout << "You are not yet born"
             << "\n";
    }
    else
    {
        cout << "You can come to  the party" << endl;
    }
    return 0;
}