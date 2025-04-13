#include <iostream>
using namespace std;
int main(){
     //if statements if written in small letters different from IF will generate errors
     int age = 9;
     if (age>18){
        cout << "You are an adult";
     }else{
        cout << "You are still young!";
     }
     //Simple if statement checks if a condition is met and executes the statement in the block of code
     //The else statement is a new condition that will be exectuded if the first condition is not met

     //esle if adds a new condition if the if condition is false sample below
     int MyMoney = 2000;
     if (MyMoney>2500){
        cout<<"Today I have a great budget!";
     } else if(MyMoney>2800){
        cout <<"We have extra money for Junk!";
     }else{
        cout<<"We have to work hard no money!";
     }
     //The last else statement above will only execute if both conditions if and else if are false

     //You can use the tenary operator instead of the if else statements does the same thing
     //Short hand if and else statement
     //Syntax variable = (condition) ? expressionTrue : expressionFalse;
     string result = (MyMoney>1000) ? "My money is more than 1000" : "My money is less than 1000";
     cout << result;
    return 0;
}