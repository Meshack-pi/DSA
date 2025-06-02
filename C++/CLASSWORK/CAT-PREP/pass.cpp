#include <iostream>
using namespace std;

int main() {
    //Password retry system
    //Ask user to enter password allow maxim 3 tries using do while loop
    //If password is correct display "access granted" else "account locked"

    int max_tries = 3;
    string password, c_password ="TEST";
    do{
        cout<<"Enter your password \n";
        cin>>password;
        if(password ==c_password){
            cout<<"Access Granted"<<endl;
            break;
        }
        max_tries -=1;
    }while(max_tries!=0);
    if(max_tries==0 &&(password!=c_password)){
        cout<<"Account locked\n";
    }
    return 0;
}