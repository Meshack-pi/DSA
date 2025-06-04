#include <iostream>
using namespace std;

void modifyval(int x){
    x = x+20;
    cout<<"The modified value: is: "<<x<<endl;
}
void pasbyref(int& x){
    x = x+10;
    cout<<"Value of x is now: "<<x<<endl;
}
void modif(int* x){
    *x = *x+10;
    cout<<"The modified value is: "<<*x<<endl;
}
int main() {
    /*
    Pass by value means a copy of the variable is passed to the function
    Changes made inside the function do not affect the original variable
    Pass by pointer
    A pointer is a memory address to the variable is passed to the function
    the function can modify the orignal value using the dereferencing * operator
    It is usefull when working wiht dynamically allocated memory or nullalbe values nullptr
    */
   int x = 10;
   modif(&x);
   cout<<"Value of x is: "<<x<<endl;
    return 0;
}

//Pass by value copies the argument and the original is not modified
//Pass by reference modifies the original value doesn't just copy the argument