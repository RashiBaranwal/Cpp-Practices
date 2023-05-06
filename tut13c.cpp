#include <iostream>

using namespace std;

int main(){
    int marks[] = {23, 45, 56, 89};

    //Pointers and array
    int* p = marks; 
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"p is "<<p<<"\n";
     
    
    return 0;
}