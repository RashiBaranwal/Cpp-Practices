#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << breakfast << endl;
    Meal m1 = lunch;
    Meal m2 = dinner;
    cout << (m1 == 2) << endl;
    cout << m2;

    return 0;
}
