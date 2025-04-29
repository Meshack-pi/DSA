#include <iostream>
using namespace std;
int main(){
    int t;
    cout<<"Insert your integer: ";
    cin>>t;
    cout<<endl;
    if(t%2!=0){
        cout<<"Integer is an odd number, cube is: ";
        cout<<t*t*t<<endl;
    }else{
        cout<<"Integer is an even number, square is: ";
        cout<<t*t<<endl;
    }
    //Exercise one Done

    //Exercise 2
    int age;
    string first_name, last_name;
    cout<<"What is your age: ";
    cin>>age;
    cout<<endl;
    cout<<"What is your first name: ";
    cin>>first_name;
    cout<<endl;
    cout<<"What is your last name: ";
    cin>>last_name;
    cout<<endl;
    if(age>=18){
        cout<<"Your age is valid, first name is: ";
        cout<<first_name<<endl;
    }else{
        cout<<"You are below the age of 18, last name is: ";
        cout<<last_name<<endl;
    }
    //Exercise 3
    int length, breadth;
    cout<<"Enter the length of the polygon: ";
    cin>>length;
    cout<<endl;
    cout<<"Enter the breadth of the polygon: ";
    cin>>breadth;
    cout<<endl;
    if(length==breadth){
        cout<<"This is a square!n\n";
    }else{
        cout<<"This is not a square!\n";
    }
    int num1, num2, num3,maximum;
    cout<<"enter 1st number: ";
    cin>>num1;
    maximum = num1;
    cout<<"Enter 2 number: ";
    cin>>num2;
    cout<<"Enter num3: ";
    cin>>num3;
    if(num2>num1){
        maximum = num2;
    }else{
        maximum = num3;
    }
    cout<<"The maximum number is: "<<maximum<<endl;
    cout<<"==CODE EXECUTION SUCCESSFUL=="<<endl;
    return 0;
}