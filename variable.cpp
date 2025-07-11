/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int a=7; //global variable

void func(){
    extern int a;
    auto b=10;
    a=5;
    cout << "the variable is a is "<< a << " and b is "<< b <<endl;
}

int main(){
    func();
    cout << "The variable is "<< a;
    return 0;
}
/*
Output:-
the variable is a is 5 and b is 10
The variable is 5
*/