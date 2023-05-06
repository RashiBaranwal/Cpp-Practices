#include <iostream>

using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    ep harry;
    union money m1;
    m1.rice = 34;
    // m1.car = 'c'; We cannot do it two times thats why when we will uncomment it it will give the garbage value as a result
    cout << m1.rice;

    return 0;
}