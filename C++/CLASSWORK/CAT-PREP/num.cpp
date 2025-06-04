#include <iostream>
using namespace std;
void ReverseN(int n){
    int digit=0,reversed=0;
    while(n>0){
        digit = n%10;
        reversed = reversed*10 + digit;
        n = n/10;
    }
    cout<<"Reversed value of n is: "<<reversed<<endl;
}

int main() {
    //input a number, use while loop to reverse the digits
    //use a fucntion (pass by value to return the reversed number)
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    ReverseN(n);
    return 0;
}