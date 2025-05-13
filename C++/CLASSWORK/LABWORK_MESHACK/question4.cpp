#include <iostream>
using namespace std;

int main() {
    //ask the user for his or her age print "Happy birthday!" for every year of the users age
    string statement = "Happy Birthday!";
    int age;
    cout<<"What is your age: "<<endl;
    cin>>age;
    for(int i=0;i<age;i++){
        cout<<statement<<endl;
    }
    return 0;
}