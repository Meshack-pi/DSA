#include <iostream>
using namespace std;

int main() {
    //Using the for loop output the statement "I am sorry a number of times specified by the user"
    string statement = "I am sorry";
    int times;
    cout<<"How many times do want to output: "<<endl;
    cin>>times;
    for(int i=0;i<times;i++){
        cout<<statement<<endl;
    }
    return 0;
}