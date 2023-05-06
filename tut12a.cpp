#include <iostream>

using namespace std;

int main(){
    int a =3;
    int * b =&a; // 'b' is a pointer which is storing the adress of 'a'
    //& --> (Adress of) operator
    cout<<"The adress of a is "<<&a<<"\n";
    cout<<"The adress of a is "<<b;
    return 0;
}