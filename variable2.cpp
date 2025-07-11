/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int b=5;
void func(){
    static int a=5;
    a++;
    b++;
    cout << "the variable is a is "<< a << " and b is "<< b <<endl;
}

int main(){
    func();
    func();
    func();
    cout << "Variable b is " << b;
    return 0;
}
/*
Output:-
the variable is a is 6 and b is 6
the variable is a is 7 and b is 7
the variable is a is 8 and b is 8
Variable b is 8
*/