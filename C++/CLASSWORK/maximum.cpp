#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, maximum;
    cout<<"Enter first number: ";
    cin>>num1;
    maximum = num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    if(num2>maximum){
        maximum = num2;
    } 
    if(num3>num2){
        maximum = num3;
    }
    cout<<"The maximum number is: "<<maximum<<endl;
    return 0;
}