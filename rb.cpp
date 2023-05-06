#include <iostream>

using namespace std;

int update(int *p){
   *p = 100;
}

int main(){
    int val = 10;
    cout<<"The val before change: "<< val<<endl;
    update(&val);
    cout << "The val after change: "<<val<<endl;

    return 0;
}