#include <iostream>
#include <cmath>
using namespace std;

void floattopp(float q, int& L, int& P){
    //q is the sum of money q in pounds
    // L is pounds
    //P is pence
    L = floor(q);
    float decimal_part = q- L;
    float r = decimal_part *100;
    P = (int)(r+0.5);
    //Handle edge cases/boundaries
    if(P ==100){
        P = 0;
        L +=1;
    }
    cout<<"Value of L is: "<<L<<endl;
    cout<<"Value of P is: "<<P<<endl;
}

int main() {
    int pounds, pence;
    floattopp(12.87,pounds,pence);
    return 0;
}