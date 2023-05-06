#include <iostream>

using namespace std;

struct employee
{
int eId;
char favChar;
float salary;
};

// typedef struct employee
// {
// int eId;
// char favChar;
// float salary;
// }ep;
// By using typedef in syntax we can use word "ep" in place of "struct employee"
 
int main(){
    struct employee harry;
    struct employee shubham;
    struct employee rohanDas;

    shubham.eId = 5;
    cout<<"The value of shubham is "<<shubham.eId<<endl;


    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary =  120000000;
    cout<<"The value of Harry is "<<harry.eId<<endl;
    cout<<"The value of Harry is "<<harry.favChar<<endl;
    cout<<"The value of Harry is "<<harry.salary<<endl;
    return 0;
}
