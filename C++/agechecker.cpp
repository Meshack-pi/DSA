#include <iostream>
#include <cmath>
using namespace std;

void ageChecker(int age){
    if(age>=18){
        cout<<"Adult\n";
    }else{
        cout<<"Minor\n";
    }
}

//Write a program to evaluate 2^50 minus 1
void Evaluator(){
    int power = pow(2.0f,50.0f);
    int substract = power - 1;
    cout<<substract<<endl;
}


int main() {
    int age;
    cout<<"what is your age: ";
    cin>>age;
    ageChecker(age);
    return 0;
}