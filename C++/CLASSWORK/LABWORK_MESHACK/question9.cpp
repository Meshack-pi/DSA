#include <iostream>
using namespace std;

int main() {
    //write a program that prompts user to input pin number
    //if pin is verified in the program print pin verified and welcome otherwise the program will allow the user another chance 
    //after 4 wrong attempts the program will output limit expired and exit
    int correct_pin = 0000;
    int input_pin, allowed_times =4;
    cout<<"Enter your pin number: ";
    cin>>input_pin;
    int count = 0;
    while(count<allowed_times){
        if(input_pin==correct_pin){
            cout<<"pin verified"<<endl;
            cout<<"Welcome";
            break;
        }else{
            cout<<"Wrong pin try again";
            cin>>input_pin;
        }
        count ++;
    }
    if(count>3){
        cout<<"Limit expired"<<endl;
    }
    return 0;
}